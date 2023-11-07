/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muebrahi <muebrahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 10:47:03 by muebrahi          #+#    #+#             */
/*   Updated: 2023/07/14 07:41:38 by muebrahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dstcpy;
	char	*strcpy;
	size_t	l;

	dstcpy = (char *) dest;
	strcpy = (char *) src;
	if (!dest && !src)
		return (NULL);
	l = 0;
	while (l < n)
	{
		dstcpy[l] = strcpy[l];
		l++;
	}
	return (dstcpy);
}
