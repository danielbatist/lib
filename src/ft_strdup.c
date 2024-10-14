/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:14:35 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/14 11:34:59 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*cpy;

	len = ft_strlen(s);
	cpy = (char *)malloc((len + 1) * (sizeof(char)));
	if (cpy == NULL)
	{
		return (NULL);
	}
	else
	{
		ft_strlcpy(cpy, s, len + 1);
	}
	return (cpy);
}

/*#include <stdio.h>
int     main(void)
{
        printf("Teste 01\n");
        char    str1[] = "Hello World";
        char    *cpy1 = ft_strdup(str1);
        printf("str1: %s\n", str1);
        if (cpy1 != NULL)
        {
            printf("cpy1: %s", cpy1);
        }
        else
        {
            printf("Error!");
        }
        free(cpy1);

        printf("\n\n");

        printf("Teste 02\n");
        char    str2[] = "";
        char    *cpy2 = ft_strdup(str2);
        printf("str2: %s\n", str2);
        if (cpy2 != NULL)
        {
            printf("cpy2: %s", cpy2);
        }
        else
        {
            printf("Error!");
        }
        free(cpy2);
        return (0);
}
*/
