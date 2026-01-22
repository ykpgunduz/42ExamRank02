#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

int	is_prime(int n)
{
	int	i = 2;

	if (n < 2)
		return (0);
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	n;
	int	sum;
	int	i;

	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		if (n > 0)
		{
			sum = 0;
			i = 2;
			while (i <= n)
			{
				if (is_prime(i))
					sum += i;
				i++;
			}
			ft_putnbr(sum);
			ft_putchar('\n');
			return (0);
		}
	}
	write(1, "0\n", 2);
	return (0);
}
