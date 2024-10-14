/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:00:01 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/14 11:25:02 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*p1 != *p2)
		{
			return (*p1 - *p2);
		}
		p1++;
		p2++;
		n--;
	}
	return (0);
}

/*#include <stdio.h>
int     main(void)
{
        char    str1[] = "Hello World";
        char    str2[] = "Minishell";
        char    str3[] = "Minihell";
        char    str4[] = "Hello World";

        int     res1 = ft_memcmp(str1, str2, 5);
        printf("ft_memcmp entre Hello World e Minishell: %i\n", res1);
        int     res2 = ft_memcmp(str2, str3, 3);
        printf("ft_memcmp entre Minishell e Minhell: %i\n", res2);
        int     res3 = ft_memcmp(str3, str4, 6);
        printf("ft_memcmp entre Minihell e Hello World: %i\n", res3);
        int     res4 = ft_memcmp(str1, str4, 3);
        printf("ft_memcmp entre Hello World e Hello World: %i\n", res4);
        return (0);
}
*/
