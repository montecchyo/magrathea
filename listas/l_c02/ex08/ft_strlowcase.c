char	*ft_strlowcase(char *str)
{
	char	c;
	int		count;

	count = 0;
	while (str[count] != '\0')
	{
		c = str[count];
		if (c > 64 && c < 91)
		{
			c = c + 32;
		}
		str[count] = c;
		count++;
	}
	return (str);
}
