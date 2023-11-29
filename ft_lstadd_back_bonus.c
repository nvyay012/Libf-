
#include "libft.h"

void	ft_lstadd_back(t_list **list, t_list *new)
{
	if (*list == NULL)
		*list = new;
	else
		ft_lstlast(*list)->next = new;
}
