/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:25:01 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/14 10:55:25 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*pt;
	size_t			tot;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	tot = nmemb * size;
	if ((tot / size) != nmemb)
		return (NULL);
	pt = (unsigned char *)malloc(tot);
	if (pt == NULL)
		return (NULL);
	else
		ft_bzero(pt, tot);
	return ((void *)pt);
}

/*#include <stdio.h>
int     main(void)
{
        printf("Teste 01\n");
        size_t  n1 = 5;
        int     *arr1 = (int *)ft_calloc(n1 , sizeof(int));
        if (arr1 != NULL && n1 > 0)
        {
                for (size_t i = 0; i < n1; i++)
                {
                        printf("%i", arr1[i]);
                }
        }
        else
        {
                printf("memory allocation failure");
        }
        free(arr1);

        printf("\n\n");

        printf("Teste 02\n");
        size_t  n2 = 4294967296;
        int     *arr2 = (int *)ft_calloc(n2 , 4294967296);
        if (arr2 != NULL && n2 > 0)
        {
                for (size_t i = 0; i < n2; i++)
                {
                        printf("%i", arr2[i]);
                }
        }
        else
        {
                printf("memory allocation failure");
        }
        free(arr2);

        printf("\n\n");

        printf("Teste 03\n");
        size_t  n3 = 0;
        int     *arr3 = (int *)ft_calloc(n3 , 4);
        if (arr3 != NULL && n3 > 0)
        {
                for (size_t i = 0; i < n3; i++)
                {
                        printf("%i", arr3[i]);
                }
        }
        else
        {
                printf("memory allocation failure");
        }
        free(arr3);

        printf("\n\n");        
        return(0);
}
*/
