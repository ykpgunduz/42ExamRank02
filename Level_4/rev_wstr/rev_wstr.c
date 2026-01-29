#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;
        int start;
        int end;
        int first_word = 1;

        while (argv[1][i])
            i++;
        
        while (i >= 0)
        {
            while (i >= 0 && (argv[1][i] == '\0' || argv[1][i] == '\t' || argv[1][i] == ' '))
                i--;

            if (i < 0)
                break;

            end = i;
            while (i >= 0 && argv[1][i] != '\t' && argv[1][i] != ' ')
                i--;
            
            start = i + 1;

            if (first_word == 0)
                write(1, " ", 1);

            while (start <= end)
            {
                write(1, &argv[1][start], 1);
                start++;
            }

            first_word = 0;
        }
    }
    write(1, "\n", 1);
    return(0);
}
