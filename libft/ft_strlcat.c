/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muebrahi <muebrahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 10:47:20 by muebrahi          #+#    #+#             */
/*   Updated: 2023/07/14 11:09:22 by muebrahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	lensrc;
	int		alllen;
	size_t	lendest;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	lendest = ft_strlen(dest);
	lensrc = ft_strlen(src);
	j = lendest;
	if (size > lendest)
		alllen = lendest + lensrc;
	else
		alllen = lensrc + size;
	while (src[i] && j + 1 < size)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = 0;
	return (alllen);
}
