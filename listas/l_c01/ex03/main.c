#include<unistd.h>
#include<stdio.h> //não permitido nas entregas

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int aux1;
	int aux2;
	int *div;
	int *mod;

	a = 11;
	b = 2;
	aux1 = 1;
	aux2 = 2;
	div = &aux1;
	mod = &aux2;
	printf("Value of a is : %d\n",a);
	printf("Value of b is : %d\n",b);
	printf("Value of div is : %d\n",*div);
	printf("Value of mod is : %d\n",*mod);
	ft_div_mod(a, b, div, mod);
	printf("Value of a is : %d\n",a);
	printf("Value of b is : %d\n",b);
	printf("Value of div is : %d\n",*div);
	printf("Value of mod is : %d\n",*mod);

}
