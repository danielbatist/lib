/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:18:15 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/14 11:37:31 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;
	size_t	src_len;

	len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= len)
	{
		return ((size + src_len));
	}
	i = 0;
	while ((len + i) < (size - 1) && src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return ((len + src_len));
}

/*#include <stdio.h>
int     main(void)
{
    char    dst[8] = "Hello ";
    const char    src[] = "World";
    size_t result = ft_strlcat(dst, src, sizeof(dst));
        if (sizeof(dst) < result)
        {
                printf("string truncation\n");
                printf("%s\n", dst);
                printf("%zu\n", result);
        }
        else
        {
                printf("%s\n", dst);
                printf("%zu\n", result);
        }
}
*/
