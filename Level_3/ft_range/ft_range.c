#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int		*result;
	int		i = 0;
	int		len;

	if (start <= end)
		len = end - start + 1;
	else
		len = start - end + 1;

	result = (int *)malloc(sizeof(int) * len);

	while (i < len)
	{
		result[i] = start;
		if (start < end)
			start++;
		else if (start > end)
			start--;
		i++;
	}
	return (result);
}
