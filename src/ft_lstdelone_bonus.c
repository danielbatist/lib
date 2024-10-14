/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 23:03:42 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/14 11:11:52 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	del(void *content)
{
	free(content);
}*/

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
		del (lst->content);
	free (lst);
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
	printf("Before delection:\n");
	while (tmp != NULL)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	
	ft_lstdelone(node1, del);
	
	head->next = node2;
	tmp = head;
	printf("After delection:\n");
	while (tmp != NULL)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	ft_lstdelone(head, del);
	ft_lstdelone(node2, del);
    return (0);
}*/