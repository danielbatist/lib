/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 00:01:28 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/12 00:32:38 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
}
/*
#include <stdio.h>

int		main(void)
{
	t_list	*head = ft_lstnew("Hello");
	t_list	*node1 = ft_lstnew("World");
    t_list	*node2 = ft_lstnew("Daniel");
	
	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	
	while (head != NULL)
	{
		printf("%s\n", (char *)head->content);
		head = head->next;
	}
    return (0);
}*/