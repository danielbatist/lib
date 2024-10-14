/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 22:11:36 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/14 11:30:31 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = (char)f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*#include <stdio.h>
char	ft_upper(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}
int		main(void)
{
	const char	str[] = "Hello World";
	char	*res = ft_strmapi(str, ft_upper);
	printf("%s\n", res);
	return (0);
}
*/