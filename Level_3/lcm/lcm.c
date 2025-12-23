unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	div;

	if (a == 0 || b == 0)
		return (0);
	div = 2;
	while (1)
	{
		if (a % div == 0 && b % div == 0)
			return (div);
		else if (div > a || div > b)
			return (1);
		div++;
	}
}
