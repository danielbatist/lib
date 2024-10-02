/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:25:01 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/02 10:39:17 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*pt;
	size_t			tot;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	tot = nmemb * size;
	if ((tot / size) != nmemb)
		return (NULL);
	pt = (unsigned char *)malloc(tot);
	if (pt == NULL)
		return (NULL);
	else
		ft_bzero(pt, tot);
	return ((void *)pt);
}
