#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	lst->content = content;
	lst->next = NULL;
	return (lst);
}
/*
int main()
{
	//t_list a;
	t_list *b;

	b = ft_lstnew("holaa");
	printf("%s", b->content);
}*/
