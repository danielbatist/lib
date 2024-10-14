/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:56:06 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/14 11:24:26 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		if (*ptr == (unsigned char)c)
		{
			return ((void *)ptr);
		}
		ptr++;
		n--;
	}
	return (NULL);
}

/*#include <stdio.h>
int     main(void)
{
    char    str[] = "Hello World";
    char    ocr = 'o';
    char    *result = ft_memchr(str, ocr, 10);
    if (result != NULL)
    {
        printf("position: %ld\n", result - str);
    }
    else
    {
    printf("The character %c not a found.\n", ocr);
    }
}
*/
