#include<unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	matriz[size];
	int cont;
	int cont_rev;

	cont_rev = size;
	cont = 0;
	while (cont <= size)
	{
		matriz[cont_rev] = tab[cont];
		cont++;
		cont_rev--;
	}
}
