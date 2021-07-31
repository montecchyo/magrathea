#include<unistd.h>

void	ft_is_negative(int n)
{
	char	sinal;

	if (n < 0)
	{
		sinal = 'N';
	}
	else
	{
		sinal = 'P';
	}
	write(1, &sinal, 1);
}
