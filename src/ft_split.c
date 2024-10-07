/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 23:46:01 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/07 00:17:08 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		i;
	int		str_len = conts(s, c);
	
}

#include <stdio.h>

int		main(void)
{
	char	*str = "Hello,world,this,is,teste";
	char	set = ',';
	char	**res = ft_split(str, set);
	return (0);
}