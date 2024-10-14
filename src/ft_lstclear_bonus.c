/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 23:03:55 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/14 11:04:33 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	del(void *content)
{
	free(content);
}*/

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst && !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
}
/*
#include <stdio.h>

int     main(void)
{
	t_list	*tmp;
    t_list	*head = ft_lstnew(strdup("Hello"));
	t_list	*node1 = ft_lstnew(strdup("World"));
	t_list	*node2 = ft_lstnew(strdup("Daniel"));

	head->next = node1;
	node1->next = node2;
	node2->next = NULL;
	tmp = head;
	printf("Before Cleared:\n");
	while (tmp != NULL)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	ft_lstclear(&head, del);
	printf("After Cleared:\n");
	if (head == NULL)
		printf("List is cleared.\n");
	return (0);
}*/