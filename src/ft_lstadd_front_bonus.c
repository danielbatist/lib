/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 23:04:11 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/14 11:03:16 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*
#include <stdio.h>

int		main(void)
{
	t_list	*head = ft_lstnew("Hello World");
	t_list	*t1;

	t1->content = (char *)"banana";
	head->next = &t1;
	ft_lstadd_front(&head, ft_lstnew((char *) "new"));
	t_list	*it;

	it = head;
	while (it != NULL)
	{
		printf("%s\n", (char *)it->content);
		it = it->next;
	}
*/