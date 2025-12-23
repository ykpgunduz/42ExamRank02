#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*current;
	t_list	*temp;

	if (!begin_list || !*begin_list)
		return;
	current = *begin_list;
	while (current && current->next)
	{
		if (cmp(current->next->data, data_ref) == 0)
		{
			temp = current->next;
			current->next = temp->next;
			free(temp);
		}
		else
			current = current->next;
	}
	current = *begin_list;
	if (cmp(current->data, data_ref) == 0)
	{
		*begin_list = current->next;
		free(current);
	}
}
