/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:14:35 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/02 11:16:49 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*cpy;

	len = ft_strlen(s);
	cpy = (char *)malloc((len + 1) * (sizeof(char)));
	if (cpy == NULL)
	{
		return (NULL);
	}
	else
	{
		ft_strlcpy(cpy, s, len + 1);
	}
	return (cpy);
}
