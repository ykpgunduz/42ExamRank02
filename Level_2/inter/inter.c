#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	seen[256] = {0};

	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (!seen[argv[1][i]])
			{
				j = 0;
				while (argv[2][j] && argv[2][j] != argv[1][i])
					j++;
				if (argv[2][j])
				{
					write(1, &argv[1][i], 1);
					seen[argv[1][i]] = 1;
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
