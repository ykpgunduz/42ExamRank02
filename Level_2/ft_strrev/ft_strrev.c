
#include <stdio.h>

char *ft_strrev(char *str)
{
    int start = 0;
    int end = 0;
    char temp;

    // String'in sonunu bul
    while (str[end])
        end++;
    end--; // Son karakterin indeksine git
    
    // Baştan ve sondan ortaya doğru swap yap
    while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    return (str);
}

int main(void)
{
    char s[] = "ezgi";
    
    printf("After: %s\n", ft_strrev(s));
    return 0;
}
