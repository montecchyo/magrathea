#include<unistd.h>
#include<stdio.h> //não permitido nas entregas

int	ft_strlen(char *str);

int	main(void)
{
	char *sentence;
	int	cont;
	
	sentence = "ecole";
	cont = ft_strlen(sentence);
	printf("%d\n", cont);
}