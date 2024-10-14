/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:40:09 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/14 12:11:54 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_subcpy(char *s, char const *st, unsigned int ini, size_t l)
{
	size_t			i;

	i = 0;
	while (st[ini] && i < l)
	{
		s[i] = st[ini];
		i++;
		ini++;
	}
	s[i] = '\0';
	return (s);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	size_t			s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		sub = malloc(1 * sizeof(char));
		if (sub == NULL)
			return (NULL);
		sub[0] = '\0';
		return ((char *)sub);
	}
	if (len > s_len - start)
		len = s_len - start;
	sub = malloc((len + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	ft_subcpy(sub, s, start, len);
	return (sub);
}

/*
#include <stdio.h>
int		main(void)
{
	char const	*str = "Hello World";
	unsigned int	pos = 6;
	char	*res = ft_substr(str, pos, 5);
	printf("string: %s\n", str);
	printf("substring: %s\n", res);
	return (0);
}*/