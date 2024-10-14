/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:49:42 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/14 11:42:00 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
		{
			last = (char *)s;
		}
		s++;
	}
	if (last != NULL)
	{
		return ((char *)last);
	}
	if (c == 0)
	{
		return ((char *)s);
	}
	return ((char *)last);
}

/*
#include <stdio.h>

int     main(void)
{
        const char str[] = "Hello World";
        int     letter = 'l';
        char    *result = ft_strrchr(str, letter);

        if (result != NULL)
        {
            printf("Position :  %ld\n" , result - str);
        }
        else{
            printf("Character %c not found\n", letter);
        }

        return (0);
}
*/