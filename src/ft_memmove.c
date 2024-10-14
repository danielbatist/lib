/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:04:50 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/14 11:22:10 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (d > s)
	{
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	else
	{
		while (n > 0)
		{
			*d = *s;
			d++;
			s++;
			n--;
		}
	}
	return (dest);
}

/*#include <stdio.h>
int     main(void)
{
        printf("Teste 01: ");
        char    src[] = "HelloWorld";
        ft_memmove(src + 5, src, 5);
        printf("%s\n", src);

        printf("Teste 02: ");
        char    src1[] = "42 rio";
        char    dest1[15];
        ft_memmove(dest1, src1, sizeof(src1));
        printf("%s\n", dest1);

        printf("Teste 03: ");
        char    src2[] = "Hello World";
        char    dest2[] = "banana";
        ft_memmove(dest1, src1, 0);
        printf("%s\n", dest2);

        printf("Teste 04: ");
        char    src3[] = {1, 2, 3, 4, 5, 6, 7, 8};
        ft_memmove(src3 + 3, src3, 6);
        for (int i = 0; i < 8; i++)
        {
            printf("%d ", src3[i]);
        }
        printf("\n");
        return(0);
}
*/
