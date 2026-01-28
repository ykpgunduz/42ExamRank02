#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int nbr = atoi(argv[1]);
        if (nbr == 1)
            printf("1");
        
        int divisor = 2;
        int first = 1;
        
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
    printf("\n");
    return (0);
}
