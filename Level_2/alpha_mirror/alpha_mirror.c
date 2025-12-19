#include <unistd.h>

void    alphamirror(char *str)
{
    int i = 0;
    char mirror;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            mirror = 'z' - (str[i] - 'a');
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            mirror = 'Z' - (str[i] - 'A');
        }
        else
        {
            mirror = str[i];
        }
        write(1, &mirror, 1);
        i++;
    }
    
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        alphamirror(av[1]);
    }
    write(1, "\n", 1);
    return(0);
}
