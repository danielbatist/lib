/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 23:03:22 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/14 11:06:51 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>
void	ft_print(void *content)
{
	printf("%s\n", (char *)content);
}

void	ft_lstup(void *content)
{
	char	*str = (char *)content;

	while (*str)
	{
		*str = ft_toupper(*str);
		str++;
	}
}*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
#include <stdio.h>
int     main(void)
{
    t_list	*head = ft_lstnew(strdup("hello"));
	t_list	*node1 = ft_lstnew(strdup("world"));
	t_list	*node2 = ft_lstnew(strdup("daniel"));

	head->next = node1;
	node1->next = node2;
	node2->next = NULL;
	printf("Before Uppercase\n");
	ft_lstiter(head, ft_print);
	ft_lstiter(head, ft_lstup);
	printf("After Uppercase\n");
	ft_lstiter(head, ft_print);
	return (0);
}*/