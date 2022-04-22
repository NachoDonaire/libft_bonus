#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *p;
	
	p = lst;
	while (p != '\0')
		p = p->next;
	return (p->content);
}


int main()
{
	//int i;
	t_list	a;
	t_list	b;
	t_list	*c;

	c = &a;
	a.next = &b;
	b.next = NULL;
	b.content = "holaa";
	printf("%s", ft_lstlast(c));
//	printf("%d", ft_lstsize(c));



	return (0);
}

