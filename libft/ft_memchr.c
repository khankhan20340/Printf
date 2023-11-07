/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muebrahi <muebrahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 10:46:46 by muebrahi          #+#    #+#             */
/*   Updated: 2023/07/14 07:49:02 by muebrahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			l;

	ptr = (unsigned char *)s;
	l = 0;
	while (l < n)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
		l++;
	}
	return (NULL);
}
