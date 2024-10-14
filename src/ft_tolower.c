/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:52:17 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/14 11:43:49 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}

/*#include <stdio.h>
int     main(void)
{
        char    letter = 'L';
        int result = ft_tolower(letter);
        if (result == letter)
            printf("No need to convert to lowercase: %c\n", result);
        else
            printf("letter converted to lowercase: %c\n", result);
        return(0);
}
*/