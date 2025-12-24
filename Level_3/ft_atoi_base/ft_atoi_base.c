int	ft_atoi_base(const char *str, int base)
{
	char	*number;
	int		result = 0;
	int		sign = 1;
	int		i = 0;

	number = (char *)str;
	if (number[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (number[i] != '\0')
	{
		if (number[i] >= '0' && number[i] <= '9')
			result = result * base + number[i] - '0';
		else if (number[i] >= 'A' && number[i] <= 'F')
			result = result * base + number[i] - '7';
		else if (number[i] >= 'a' && number[i] <= 'f')
			result = result * base + number[i] - 'W';
		i++;
	}
	return (sign * result);
}
