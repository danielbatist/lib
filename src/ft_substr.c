/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:40:09 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/03 00:14:00 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sb;

	if (s == NULL || start >= ft_strlen(s))
	{
		return (NULL);
	}
	sb = malloc(len + 1 * sizeof(char));
	if (sb == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		sb[i] = s[start + i];
		i++;
	}
	sb[i] = '\0';
	return (sb);
}
