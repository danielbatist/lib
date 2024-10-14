/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:57:34 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/14 11:00:43 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_len(int num)
{
	size_t	c;

	c = 0;
	if (num < 0)
		c++;
	if (num == 0)
		return (1);
	while (num)
	{
		num = num / 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	neg;
	size_t	len;

	neg = 1;
	len = ft_len(n);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		neg = -1;
		str[0] = '-';
	}
	if (n == 0)
		str[0] = '0';
	str[len] = '\0';
	while (n != 0)
	{
		str[(len--) - 1] = ((n % 10) * neg) + '0';
		n /= 10;
	}
	return (str);
}

/*#include <stdio.h>
int	main(void)
{
	int		num = -123454596;
	char	*res = ft_itoa(num);
	printf("num: %s\n", res);
	return (0);
}
*/