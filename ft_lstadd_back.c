#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *p;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			p = ft_lstlast(*lst);
			p->next = new;
		}
	}
}


