#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*result;
	int		i;
	int		len;

	i = 0;
	len = abs(end - start + 1);
	result = (int *)malloc(len);
	while (i < len)
	{
		if (end <= start)
			result[i++] = end++;
		else if (end >= start)
			result[i++] = end--;
	}
	return(result);
}