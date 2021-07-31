#include<unistd.h>

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int	num1;
	int	num2;
	int	num3;
	
	num1 = '0';
	while (num1 <= '9')
	{
		num2 = num1 + 1;
		while (num2 <= '9')
		{
				if (num1 != '7' || num2 != '8' || num3 != '9')
				{
					write(1, ", ", 2);
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
