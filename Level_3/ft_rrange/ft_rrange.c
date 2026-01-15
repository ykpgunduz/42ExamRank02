#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*range;
	int	len;
	int	i;
	int	step;

	if (end >= start)
		len = end - start + 1;
	else
		len = start - end + 1;
	range = malloc(sizeof(int) * len);
	if (!range)
		return (NULL);
	
	if (end >= start)
		step = -1;
	else
		step = 1;
	i = 0;
	while (i < len)
	{
		range[i] = end;
		end += step;
		i++;
	}
	return (range);
}