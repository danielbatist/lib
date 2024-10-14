/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:50:51 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/14 10:57:53 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*#include <stdio.h>
int     main(void)
{
        unsigned char     asc1 = 57; // character '9'
        unsigned char     asc2 = 32; // character ' '
        unsigned char     asc3 = 130; // character 'é'

        if (ft_isascii(asc1) != 0)
                printf("%i belongs to the ascii table\n", asc1);
        else
                printf("%i doesn't belong to the ascii table\n", asc1);
        if (ft_isascii(asc2) != 0)
                printf("%i belongs to the ascii table\n", asc2);
        else
                printf("%i doesn't belong to the ascii table\n", asc2);
        if (ft_isascii(asc3) != 0)
                printf("%i belongs to the ascii table\n", asc3);
        else
                printf("%i doesn't belong to the ascii table\n", asc3);
}*/
