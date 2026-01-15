#include <stdlib.h>
#include <stdio.h>

int	pgcd(int a, int b)
{
	int	temp;

	if (a < 0 || b < 0)
		return (0);
	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	return (a);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d", pgcd(atoi(argv[1]), atoi(argv[2])));
	}
	printf("\n");
	return (0);
}
