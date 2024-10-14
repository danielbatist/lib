/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:23:38 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/14 10:53:54 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}

/*#include <stdio.h>

int     main(void)
{
        //Teste 1
        size_t      i;
        char        str1[12] = "Hello World";
        printf("Teste 1\n"); 
        printf("Before: %s\n", str1);
        ft_bzero(str1, 5);
        i = 0;
        printf("After: ");
        while (i < sizeof(str1))
        {
            if (str1[i] == '\0')
                printf("\\0");
            else
                printf("%c", str1[i]);
            i++;
        }
        printf("\n");
        printf("\n");

        //Teste 2
        printf("Teste 2\n"); 
        char        str2[6] = "banana";

        printf("Before: %s\n", str2);
        ft_bzero(str2, sizeof(str2));
        i = 0;
        printf("After: ");
        while (i < sizeof(str2))
        {
            if (str2[i] == '\0')
                printf("\\0");
            else
                printf("%c", str2[i]);
            i++;
        }
        return (0);
}
*/
