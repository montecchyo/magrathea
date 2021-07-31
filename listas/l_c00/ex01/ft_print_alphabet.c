#include<unistd.h>

void	ft_print_alphabet(void)
{
	int		i;
	char	c;

	i = 97;
	while (i < 123)
	{
		c = i;
		write (1, &c, 1);
		i++;
	}
}
