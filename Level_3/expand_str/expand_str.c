#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int first_word;

	if (argc == 2)
	{
		i = 0;
		first_word = 1;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i])
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
			{
				while (argv[1][i] == ' ' || argv[1][i] == '\t')
					i++;
				if (argv[1][i])
					write(1, "   ", 3);
			}
			else
			{
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
