#include<unistd.h>
#include<stdio.h> //não permitido nas entregas

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	val_a;
	int	val_b;
	int	*p1;
	int	*p2;

	val_a = 51;
	val_b = 42;
	p1 = &val_a;
	p2 = &val_b;
	printf("val_a = %d\nval_b = %d\n", val_a, val_b);
	ft_swap(p1, p2);
	printf("val_a = %d\nval_b = %d\n", val_a, val_b);
}
