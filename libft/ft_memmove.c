/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muebrahi <muebrahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 10:47:07 by muebrahi          #+#    #+#             */
/*   Updated: 2023/07/14 07:51:28 by muebrahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dstmov;
	char	*srcmov;
	size_t	l;

	if (!dest && !src)
		return (NULL);
	dstmov = (char *)dest;
	srcmov = (char *)src;
	l = 0;
	if (dstmov > srcmov)
		while (n--)
			dstmov[n] = srcmov[n];
	else
	{
		while (n--)
		{
			dstmov[l] = srcmov[l];
			l++;
		}
	}
	return (dstmov);
}
