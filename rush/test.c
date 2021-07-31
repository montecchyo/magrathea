#include <unistd.h>

void	print_matrix(int matrix[4][4], int size);
int	validate(int matrix[4][4], int size, int *coords, char *str);
int	duplicate(int matrix[4][4], int row, int col, int num);
int	duplicate_row(int matrix[4][4], int row, int col, int num);
int	duplicate_col(int matrix[4][4], int row, int col, int num);
int	correct_view_row(int matrix[4][4], int size, int *row_new, char *str);
int	correct_view_col(int matrix[4][4], int size, int *col_new, char *str);
void	fill_zeroes(int matrix[4][4], int size);
int	solve(int matrix[4][4], int size, char *str);
void	put_char(char c);

int	main(int argc, char *argv[])
{
	char	str[] = "4321122243211222";
	int	matrix[4][4];
	int	i;
	int	j;
	int	size = 4;
	
	fill_zeroes(matrix, size); 
	solve(matrix, size, str);
}

int	solve(int matrix[4][4], int size, char *str)
{
	int	row;
	int	col;
	int	w;
	int	coords[3];

	row = 0;
	while (row < size) {
		col = 0;
		while (col < size) {
			if (matrix[row][col] == 0) {
				coords[0] = row;
				coords[1] = col;
				w = 1;
				while( w <= size ) {
					coords[2] = w;
					if (validate(matrix, size, coords, str))
					{
						matrix[row][col] = w;
						solve(matrix, size, str);
						matrix[row][col] = 0;
					}
					w++;
				}
				return 0; 
			}
			col++;
		}
		row++;
	}
	print_matrix(matrix, 4);
	return 0;
}

int	validate(int matrix[4][4], int size, int *coords, char *str)
{
	int	row;
	int	col;
	int	new_value;
	int	row_new[2];
	int	col_new[2];

	row = coords[0];
	row_new[0] = row;
	row_new[1] = coords[2];
	col = coords[1];
	col_new[0] = col;
	col_new[1] = coords[2];
	new_value = coords[2];
	if (col == size - 1)
	{
		if (!correct_view_row(matrix, size, row_new, str))
			return 0;
	}
	if (row == size - 1)
	{
		if (!correct_view_col(matrix, size, col_new, str))
			return 0;
	}
	return !duplicate(matrix, row, col, new_value);
}

int	duplicate(int matrix[4][4], int row, int col, int num)
{
	return duplicate_col(matrix, row, col, num) || duplicate_row(matrix, row, col, num);
}

int	duplicate_row(int matrix[4][4], int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < col) {
		if (matrix[row][i] == num) {
			return 1;
		}
		i++;
	}
	return 0;
}

int	duplicate_col(int matrix[4][4], int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < row) {
		if (matrix[i][col] == num) {
			return 1;
		}
		i++;
	}
	return 0;
}

int	correct_view_row(int matrix[4][4], int size, int *row_new, char *str)
{
	int	i;
	int	max[2];
	int	inc_count[2];
	int	row = row_new[0];
	int	new = row_new[1];

	max[0] = 0;
	max[1] = new;
	inc_count[0] = 0;
	inc_count[1] = 1;
	i = 0;
	while (i < size) {
		if (matrix[row][i] > max[0]) {
			max[0] = matrix[row][i];
			inc_count[0]++;
		}
		if (matrix[row][size-i-1] > max[1]) {
			max[1] = matrix[row][size-i-1];
			inc_count[1]++;
		}
		i++;
	}
	if (new > max[0]) {
		inc_count[0]++;
	}
	if (inc_count[0] + '0' == str[size*2+row] && inc_count[1] + '0' == str[size*2+row+size])
		return 1;
	return 0;
}

int	correct_view_col(int matrix[4][4], int size, int *col_new, char *str)
{
	int	i;
	int	max[2];
	int	inc_count[2];
	int	col = col_new[0];
	int	new = col_new[1];

	max[0] = 0;
	max[1] = new;
	inc_count[0] = 0;
	inc_count[1] = 1;
	i = 0;
	while (i < size) {
		if (matrix[i][col] > max[0]) {
			max[0] = matrix[i][col];
			inc_count[0]++;
		}
		if (matrix[size-i-1][col] > max[1]) {
			max[1] = matrix[size-i-1][col];
			inc_count[1]++;
		}
		i++;
	}
	if (new > max[0]) {
		inc_count[0]++;
	}
	if (inc_count[0] + '0' == str[col] && inc_count[1] + '0' == str[col+size])
		return 1;
	return 0;
}

void	fill_zeroes(int matrix[4][4], int size)
{
	int	row;
	int	col;

	row = 0;
	while (row < size) {
		col = 0;
		while (col < size) {
			matrix[row][col] = 0;
			col++;
		}
		row++;
	}
}

void	print_matrix(int matrix[4][4], int size)
{
	int	row = 0;
	int	col = 0;

	while(row < size )
	{
		col = 0;
		while( col < size )
		{
			put_char(matrix[row][col] + '0');
			put_char(' ');
			col++;
		}
		put_char('\n');
		row++;
	}
	put_char('\n');
}

void	put_char(char c)
{
	write(1, &c, 1);
}