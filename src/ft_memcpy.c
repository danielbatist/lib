/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:01:55 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/14 11:21:22 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	while (n > 0)
	{
		*d = *s;
		s++;
		d++;
		n--;
	}
	return (dest);
}

/*#include <stdio.h>
int     main(void)
{
    // Teste 01
        printf("Teste 01: ");
        char    src[] = "Hello World";
        char    dst[20];
        size_t  len = 9;
        ft_memcpy(dst, src, len);
        dst[len] = '\0';
        printf("%s\n\n", dst);

    // Teste 02

        printf("Teste 02: ");
        int     src1[] = {1, 2, 3, 4, 5};
        int     dst1[20];
        ft_memcpy(dst1, src1, sizeof(src1));
        for(size_t i = 0; i < 5; i++)
        {
            printf("%d", dst1[i]);
        }
        printf("\n\n");
        
    // Teste 03

        printf("Teste 03: ");
        char dest[10];
        char src2[10];

        ft_memset(src2, 0, sizeof(src2));
        ft_memcpy(dest, src2, 10);
        for(int i = 0; i < 10; i++)
        {
            printf("%d", dest[i]);
        }
        return (0);
}
*/