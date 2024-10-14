/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:39:52 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/14 10:56:59 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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
        char    c = 'a';
        if (ft_isalpha(c) != 0)
        {
                printf("%c is an alphabetic character\n", c);
        }
        else
        {
                printf("%c is not an alphabetic character\n", c);
        }

        return (0);
}
*/