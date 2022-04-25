#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *p;

	if (lst)
	{
		while (lst[0])
		{
			p = lst[0] -> next;
			ft_lstdelone(*lst, del);
			lst[0] = p;
		}
	}
}
