/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 23:08:20 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/02 00:36:34 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_space(const char *str)
{
	int		i;

	i = 0;
	while (str[i] <= ' ')
	{
		i++;
	}
	return (i);
}

int	ft_sign(const char *str, int *i)
{
	int		sign;
	int		tmp;

	sign = 1;
	tmp = 0;
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			sign *= -1;
		(*i)++;
		tmp++;
	}
	if (tmp > 1)
		return (0);
	return (sign);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	int		result;

	i = ft_space(str);
	sign = ft_sign(str, &i);
	if (sign == 0)
		return (0);
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
