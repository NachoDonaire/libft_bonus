#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *sol1;
	t_list *sol2;

	if (!lst || !del || !f)
		return (NULL);
	sol2 = 0;
	while (lst)
	{
		sol1 = ft_lstnew((*f)(lst -> content));
		if (!sol1)
		{
			ft_lstclear(&sol2, del);
			return (NULL);
		}
		ft_lstadd_back(&sol2, sol1);
		lst = lst -> next;
	}
	return (sol2);
}


	
