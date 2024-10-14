/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 12:00:15 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/14 11:32:05 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	ft_upper(unsigned int i, char * c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
	{
		*c -= 32;
	}
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*#include <stdio.h>

int		main(void)
{
	char	str[] = "hello world";
	ft_striteri(str, ft_upper);
	printf("%s\n", str);
	return (0);
}
*/
