/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 00:49:55 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/14 11:28:37 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n < 10)
	{
		ft_putchar_fd((n + '0'), fd);
		return ;
	}
	else
	{
		ft_putnbr_fd ((n / 10), fd);
		ft_putnbr_fd ((n % 10), fd);
	}
}

/*#include <stdio.h>
int	main(void)
{
	ft_putnbr_fd(42, 1);
	printf("\n");
	ft_putnbr_fd(-2147483648, 1);
}
*/