/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:51:28 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/03 13:39:04 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	ini;
	size_t	end;
	char	*str;

	end = ft_strlen(s1);

	ini = 0;
	while (s1[ini] && ft_strchr(set, s1[ini]))
	{
		ini++;
	}
	while (end > ini && ft_strchr(set, s1[end - 1]))
	{
		end--;
	}
	str = malloc((end - ini + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[ini], (end - ini + 1));
	return (str);
}

#include <stdio.h>

int		main(void)
{
	char	*str = "        Hello World         ";
	char	*set  = " ";
	char	*res = ft_strtrim(str, set);
	printf("res:%s\n", res);
	return (0);
}