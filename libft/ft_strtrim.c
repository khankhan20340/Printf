/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muebrahi <muebrahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 10:45:12 by muebrahi          #+#    #+#             */
/*   Updated: 2023/07/14 08:25:48 by muebrahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	test(char const *set, const char c)
{
	size_t	l;

	l = 0;
	while (set[l])
	{
		if (c == set[l++])
		{
			return (0);
		}
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	l;

	start = 0;
	while (s1 && set && s1[start] && !test(set, s1[start]))
	{
		start++;
	}
	end = start;
	while (s1 && s1[end])
	{
		end++;
	}
	while (end - start && set && !test(set, s1[end - 1]))
		end--;
	str = malloc(end - start + 1);
	if (!str)
		return (NULL);
	l = 0;
	while (start < end)
		str[l++] = s1[start++];
	str[l] = '\0';
	return (str);
}
