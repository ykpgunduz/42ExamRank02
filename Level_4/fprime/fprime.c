#include <stdlib.h>
#include <stdio.h>

void	fprime(int nbr)
{
	int	divisor;
	int	first;

	if (nbr == 1)
	{
		printf("1");
		return ;
	}
	divisor = 2;
	first = 1;
	while (nbr > 1)
	{
		if (nbr % divisor == 0)
		{
			if (!first)
				printf("*");
			printf("%d", divisor);
			first = 0;
			nbr /= divisor;
		}
		else
			divisor++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		fprime(atoi(argv[1]));
	printf("\n");
	return (0);
}
