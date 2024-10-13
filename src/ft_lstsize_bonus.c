/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 23:05:46 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/12 23:05:50 by dbatista         ###   ########.fr       */
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
