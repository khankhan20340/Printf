/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muebrahi <muebrahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:19:35 by muebrahi          #+#    #+#             */
/*   Updated: 2023/07/14 07:53:55 by muebrahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*buffer;
	size_t	l;

	buffer = (char *) s;
	l = 0;
	while (l < n)
	{
		buffer[l] = c;
		l++;
	}
	return (s);
}
