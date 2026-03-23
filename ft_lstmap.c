#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	new = 0;
	while (lst != 0)
	{
		if (lst->content != 0)
		{
			tmp = ft_lstnew(f(lst->content));
			ft_lstadd_back(&new, tmp);
		}
		else
			ft_lstclear(&new, del);
		lst = lst->next;
	}
	return (new);
}
