#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list *p;
	int i;

	p = lst;
	i = 0;
	while (p != '\0')
	{
		i++;
		p = p->next;
	}
	return (i);
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
	printf("%s", c->next->content);
	printf("%d", ft_lstsize(c));



	return (0);
}
	


