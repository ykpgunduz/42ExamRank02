int	ft_atoi_base(const char *str, int base)
{
	int i = 0;
	int result = 0;
	int sign = 1;
	int val;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}

	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			val = str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'f')
			val = str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
			val = str[i] - 'A' + 10;
		else
			break;
		
		if (val >= base)
			break;

		result = result * base + val;
		i++;
	}
	return (result * sign);
}
