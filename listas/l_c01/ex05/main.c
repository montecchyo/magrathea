#include<unistd.h>
#include<stdio.h> //não permitido nas entregas

void	ft_putstr(char *str);

int	main(void)
{
	char *sentence;
	
	sentence = "Eu gostaria de dizer";

	ft_putstr(sentence);
}
