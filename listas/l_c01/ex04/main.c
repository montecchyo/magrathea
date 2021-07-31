#include<unistd.h>
#include<stdio.h> //não permitido nas entregas

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	*a;
	int	*b;
	int aux1;
	int aux2;


	
	aux1 = 11;
	aux2 = 2;
	a = &aux1;
	b = &aux2;
	printf("Value of aux1 is : %d\n",aux1);
	printf("Value of aux2 is : %d\n",aux2);
	printf("Value of a is : %d\n",*a);
	printf("Value of b is : %d\n",*b);
	ft_ultimate_div_mod(a, b);
	printf("Value of aux1 is : %d\n",aux1);
	printf("Value of aux2 is : %d\n",aux2);
	printf("Value of a is : %d\n",*a);
	printf("Value of b is : %d\n",*b);

}