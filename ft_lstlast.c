#include "libft.h"

t_list   *ft_lstlast(t_list *lst)
{
  int i;
  t_list *p;
	
	p = lst;
	while (p)
    {
      i++;
		p = p->next;
    }
    p = lst;
    i--;
    while (i > 0)
    {
      p = p->next;
      i--;
    }
	return (p);
}


int main()
{
	//int i;
	t_list	a;
	t_list	b;
    t_list  e;
	t_list	*c;
    t_list *d;

	c = &a;
	a.next = &b;
	b.next = &e;
    e.next = NULL;
    e.content = "got it!";
	b.content = "holaa";
    d = ft_lstlast(c);
	//printf("%d", i);
	printf("%s", (char *)d->content);



	return (0);
}

