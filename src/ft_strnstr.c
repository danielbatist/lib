/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:32:32 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/14 11:40:43 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;
	const char	*b;
	const char	*l;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (*big && i < len)
	{
		b = big;
		l = little;
		j = 0;
		while (*b && *l && *b == *l && i + j < len)
		{
			b++;
			l++;
			j++;
		}
		if (*l == '\0')
			return ((char *)big);
		big++;
		i++;
	}
	return (NULL);
}

//#include <stdio.h>
/*
 int    main(void)
 {
        const char hay[] = "Hello";
        const char needle[] = "Hello World";
        char *result = ft_strnstr(hay, needle, 13);
        if (result != NULL)
            printf("substring %s found: %s.\n", needle, result);
        else
            printf("substring %s not found.\n", needle);
        return (0);
 }
 */
