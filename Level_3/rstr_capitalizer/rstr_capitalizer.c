#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int first;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			first = 1;
			int j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
				{
					if (argv[i][j + 1] == '\0' || argv[i][j + 1] == ' ' || argv[i][j + 1] == '\t')
						argv[i][j] -= 32;
				}
				else if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
				{
					if (argv[i][j + 1] != '\0' && argv[i][j + 1] != ' ' && argv[i][j + 1] != '\t')
						argv[i][j] += 32;
				}
				first = 0;
				write(1, &argv[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
