#include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		if (s[i] != reject[i])
		{
			len++;
			i++;
		}
		else
			i++;
	}
	return (len);
}
