#include<unistd.h>

void	ft_print_numbers(void)
{
	int		i;
	char	c;

	i = 48;
	while (i < 58)
	{
		c = i;
		write(1, &c, 1);
		i++;
	}
}
