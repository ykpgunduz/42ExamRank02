int	parasum(int *tab, unsigned int len)
{
	unsigned int i = 0;
	int sum = 0;

	while (i < len)
	{
		sum += tab[i];
		i++;
	}
	return (sum);
}
