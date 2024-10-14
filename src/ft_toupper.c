/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:53:09 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/14 11:44:18 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}

/*#include <stdio.h>
int     main(void)
{
        char    letter = 'a';
        int result = ft_toupper(letter);
        if (result == letter)
            printf("No need to convert to uppercase: %c\n", result);
        else
            printf("letter converted to uppercase: %c\n", result);
        return(0);
}
*/
