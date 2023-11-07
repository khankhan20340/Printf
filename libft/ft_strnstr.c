/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muebrahi <muebrahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 10:47:31 by muebrahi          #+#    #+#             */
/*   Updated: 2023/07/12 17:07:46 by muebrahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)

{
	size_t	n;

	if (*little == 0)
	{
		return ((char *)big);
	}
	n = ft_strlen (little);
	while (*big && len > 0)
	{
		if (*big == *little && ft_strncmp(big, little, n) == 0 && len >= n)
		{
			return ((char *) big);
		}
		++big;
		--len;
	}
	return (NULL);
}
