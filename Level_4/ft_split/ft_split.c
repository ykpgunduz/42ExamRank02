#include <stdlib.h>

int ft_strlen(char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return (len);
}

char    **ft_split(char *str)
{
    int x = 0;
    int y = 0;
    int z = 0;
    int start;
    char **result = malloc(sizeof(char *) * (ft_strlen(str) + 1));

    while (str[x])
    {
        while (str[x] && str[x] == ' ')
            x++;

        if (str[x])
        {
            start = x;

            while (str[x] && str[x] != ' ')
                x++;

            result[z] = malloc(sizeof(char) * (x - start + 1));

            y = 0;
            while (start < x)
                result[z][y++] = str[start++];
            result[z][y] = '\0';
            z++;
        }
    }
    result[z] = NULL;
    return (result);
}
