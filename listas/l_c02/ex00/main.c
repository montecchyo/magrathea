#include<stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	nome[] = "Klevlon";
	char	texto[] = "Cata vento.";
	char	*aux;

	aux = ft_strcpy(texto, nome);
	printf("%s\n", aux);
	return (0);
}
