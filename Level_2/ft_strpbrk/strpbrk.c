char *ft_strpbrk(const char *s, const char *accept)
{
    int i, j;

    i = 0;
    while (s[i])
    {
        j = 0;
        while (accept[j])
        {
            if (s[i] == accept[j])
                return ((char *)&s[i]);
            j++;
        }
        i++;
    }
    return (0);
}
