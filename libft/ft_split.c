/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muebrahi <muebrahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 10:44:45 by muebrahi          #+#    #+#             */
/*   Updated: 2023/07/14 10:56:27 by muebrahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_tklen(const char *s, char c)
{
	size_t	rt;

	rt = 0;
	while (*s)
	{
		if (*s != c)
		{
			++rt;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (rt);
}

char	**ft_split(const char *s, char c)
{
	char	**rt;
	size_t	i;
	size_t	len;

	if (!s)
		return (0);
	i = 0;
	rt = malloc(sizeof(char *) * (ft_tklen(s, c) + 1));
	if (!rt)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			rt[i++] = ft_substr(s - len, 0, len);
		}
		else
			++s;
	}
	rt[i] = 0;
	return (rt);
}
