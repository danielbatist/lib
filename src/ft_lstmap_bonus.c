/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 23:02:42 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/14 10:47:40 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
void	ft_print(void *content)
{
	printf("%s\n", (char *)content);
}

void	*ft_lstup(void *content)
{
	char	*str = (char *)content;
	char	*new = ft_strdup(str);
	if (!new)
		return (NULL);
	char	*tmp = new;

	while (*tmp)
	{
		*tmp = ft_toupper(*tmp);
		tmp++;
	}
	return (new);
}

void	del(void *content)
{
	free(content);
}*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	new_list = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst != NULL)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/*#include <stdio.h>

int     main(void)
{
    t_list	*head = ft_lstnew(ft_strdup("hello"));
	t_list	*node1 = ft_lstnew(ft_strdup("world"));
	t_list	*node2 = ft_lstnew(ft_strdup("daniel"));
    t_list  *new_list;

	head->next = node1;
	node1->next = node2;
	node2->next = NULL;
	printf("Origin List:\n");
	ft_lstiter(head, ft_print);
    new_list = ft_lstmap(head, ft_lstup, del);
	printf("New List:\n");
	ft_lstiter(new_list, ft_print);
	ft_lstclear(&head, del);
	ft_lstclear(&new_list, del);
	return (0);
}*/