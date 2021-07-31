void	ft_ultimate_div_mod(int *a, int *b)
{
	int div_aux;
	int mod_aux;

	div_aux = *a / *b;
	mod_aux = *a % *b;
	*a = div_aux;
	*b = mod_aux;
}