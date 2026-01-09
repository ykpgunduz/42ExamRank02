#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int *range;
    int len;
    int i;

    if (end >= start)
        len = end - start + 1;
    else
        len = start - end + 1;

    range = (int *)malloc(sizeof(int) * len);
    if (!range)
        return (NULL);

    i = 0;
    while (i < len)
    {
        range[i] = end;
        if (end > start)
            end--;
        else if (end < start)
            end++;
        i++;
    }

    return (range);
}