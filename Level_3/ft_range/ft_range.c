#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*result;
	int		i;
	int		len;

	i = 0;
	len = abs(start - end + 1);
	result = (int *)malloc(len);
	while (i < len)
	{
		if (start <= end)
			result[i++] = start++;
		else if (start >= end)
			result[i++] = start--;
	}
	return(result);
}