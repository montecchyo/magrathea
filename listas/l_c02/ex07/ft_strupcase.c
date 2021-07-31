char	*ft_strupcase(char *str)
{
	char	c;
	int		count;

	count = 0;
	while (str[count] != '\0')
	{
		c = str[count];
		if (c > 96 && c < 123)
		{
			c = c - 32;
		}
		str[count] = c;
		count++;
	}
	return (str);
}
