/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muebrahi <muebrahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 10:46:56 by muebrahi          #+#    #+#             */
/*   Updated: 2023/07/14 07:50:06 by muebrahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *a1, const void *a2, size_t size)
{
	int	result;

	while (size-- > 0)
	{
		result = *(unsigned char *)a1 - *(unsigned char *)a2;
		if (result != 0)
			return (result);
		a1++;
		a2++;
	}
	return (0);
}
