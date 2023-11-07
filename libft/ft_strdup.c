/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muebrahi <muebrahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 00:36:53 by muebrahi          #+#    #+#             */
/*   Updated: 2023/07/14 07:57:31 by muebrahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup( const char *str1 )
{
	size_t	l;
	char	*cpy;

	l = 0;
	while (str1[l])
	{
		l++;
	}
	cpy = malloc(sizeof(*str1) * l + 1);
	while (cpy && l--)
	{
		cpy[l + 1] = str1[l + 1];
	}
	if (cpy && l++)
	{
		cpy[l] = str1[l];
	}
	return (cpy);
}
