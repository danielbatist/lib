/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:31:17 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/14 11:39:58 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
	{
		return (0);
	}
	while (((n - 1) > 0) && (*str1 && *str2) && (*str1 == *str2))
	{
		str1++;
		str2++;
		n--;
	}
	return (*str1 - *str2);
}

/*#include <stdio.h>
int     main(void)
{
        const char  str1[] = "Hello";
        const char  str2[] = "Hell";
        const char  str3[] = "World";
        const char  str4[] = "Work";

        printf("%i\n" , ft_strncmp(str1, str2, 5));
        printf("%i\n" , ft_strncmp(str1, str3, 3));
        printf("%i\n" , ft_strncmp(str3, str4, 3));
        printf("%i\n" , ft_strncmp(str4, str1, 2));
}*/
