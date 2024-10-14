/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 23:05:46 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/14 11:19:42 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	cont;

	cont = 0;
	while (lst != NULL)
	{
		cont++;
		lst = lst->next;
	}
	return (cont);
}

/*
#include <stdio.h>

int	main(void)
{
	t_list *head = NULL;
	t_list *node1 = ft_lstnew((int *)10);
	t_list *node2 = ft_lstnew((int *)20);
	t_list *node3 = ft_lstnew((int *)30);

	node1->next = node2;
	node2->next = node3;
	head = node1;
	printf("%d\n", ft_lstsize(head));
}*/