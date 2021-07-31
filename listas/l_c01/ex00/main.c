#include<unistd.h>
#include<stdio.h> //não permitido nas entregas

void	ft_ft(int *nbr);

int	main(void)
{
	int	val;

	val = 0;
	printf("%d\n", val);
	ft_ft(&val);
	printf("%d\n", val);
}
