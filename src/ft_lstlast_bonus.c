/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 23:03:08 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/14 11:18:14 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

/*#include <stdio.h>

int	main(void)
{
	t_list *head = NULL;
	t_list *node1 = ft_lstnew("hello");
	t_list *node2 = ft_lstnew("world");
	t_list *node3 = ft_lstnew("banana");

	node1->next = node2;
	node2->next = node3;
	head = node1;
	t_list *res = ft_lstlast(head);
	if (res != NULL)
	{
		printf("The last node: %s", (char *)res->content);
	}
}*/
