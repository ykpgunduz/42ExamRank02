#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i;
	int j;
	int word_count;
	int word_len;
	char **words;

	if (argc == 2)
	{
		i = 0;
		word_count = 0;
		while (argv[1][i])
		{
			while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
				i++;
			if (argv[1][i])
				word_count++;
			while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
				i++;
		}
		if (word_count == 0)
		{
			write(1, "\n", 1);
			return (0);
		}
		words = malloc(sizeof(char *) * word_count);
		i = 0;
		j = 0;
		while (argv[1][i])
		{
			while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
				i++;
			if (argv[1][i])
			{
				word_len = 0;
				while (argv[1][i + word_len] && argv[1][i + word_len] != ' ' && argv[1][i + word_len] != '\t')
					word_len++;
				words[j] = malloc(word_len + 1);
				int k = 0;
				while (k < word_len)
				{
					words[j][k] = argv[1][i];
					i++;
					k++;
				}
				words[j][k] = '\0';
				j++;
			}
		}
		i = word_count - 1;
		while (i >= 0)
		{
			j = 0;
			while (words[i][j])
			{
				write(1, &words[i][j], 1);
				j++;
			}
			if (i > 0)
				write(1, " ", 1);
			free(words[i]);
			i--;
		}
		free(words);
	}
	write(1, "\n", 1);
	return (0);
}
