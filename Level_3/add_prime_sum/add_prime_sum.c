#include <unistd.h>

int	ft_atoi(char *str)
{
	int result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result);
}

int	is_prime(int n)
{
	int i;

	if (n <= 1)
		return (0);
	i = 2;
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	put_nbr(int n)
{
	if (n >= 10)
		put_nbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

int main(int argc, char **argv)
{
	int n;
	int sum;
	int i;

	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		if (n <= 0)
		{
			write(1, "0\n", 2);
			return (0);
		}
		sum = 0;
		i = 2;
		while (i <= n)
		{
			if (is_prime(i))
				sum += i;
			i++;
		}
		put_nbr(sum);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
