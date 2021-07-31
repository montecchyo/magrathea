#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int		i;
	char	c;

	i = 122;
	while (i >= 97)
	{
		c = i;
		write(1, &c, 1);
		i--;
	}
}
