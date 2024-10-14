/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 23:46:01 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/14 12:20:32 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	size_t	ft_conts(const char *str, char set)
{
	size_t	i;
	size_t	conts;

	i = 0;
	conts = 0;
	while (str[i])
	{
		while (str[i] && str[i] == set)
			i++;
		if (str[i] && str[i] != set)
			conts++;
		while (str[i] && str[i] != set)
			i++;
	}
	return (conts);
}

static	char	*ft_pull(const char *str, size_t i, char set)
{
	char	*res;
	size_t	j;
	size_t	len;

	j = 0;
	len = 0;
	while (str[i + len] && str[i + len] != set)
		len++;
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (str[i] && str[i] != set)
	{
		res[j++] = str[i++];
	}
	res[j] = '\0';
	return (res);
}

static	void	ft_free_all(char **mat, size_t world_str)
{
	size_t	i;

	i = 0;
	while (i < world_str)
	{
		free(mat[i]);
		i++;
	}
	free(mat);
}

static	size_t	pro_str(char **mat, const char *str, size_t *w_str, char set)
{
	size_t	i;

	i = 0;
	mat[*w_str] = ft_pull(str, i, set);
	if (!mat[*w_str])
	{
		ft_free_all(mat, *w_str);
		return (0);
	}
	(*w_str)++;
	return (1);
}

char	**ft_split(char const *str, char set)
{
	int		i;
	char	**mat;
	size_t	world_str;

	if (!str)
		return (NULL);
	mat = malloc((ft_conts(str, set) + 1) * sizeof(char *));
	if (!mat)
		return (NULL);
	i = 0;
	world_str = 0;
	while (str[i])
	{
		while (str[i] && str[i] == set)
			i++;
		if (str[i] && !pro_str(mat, str + i, &world_str, set))
			return (NULL);
		while (str[i] && str[i] != set)
			i++;
	}
	mat[world_str] = NULL;
	return (mat);
}

/*
#include <stdio.h>

int		main(void)
{
	char	*str = "Hello;world;this;is;test;banana;42;rio";
	char	set = ';';
	char	**res = ft_split(str, set);
	int		i;

	i = 0;
	while (res[i])
	{
		printf ("str[%i] : %s\n", i, res[i]);
		i++;
	}
	return (0);
}
*/
