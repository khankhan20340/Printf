/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muebrahi <muebrahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 10:45:06 by muebrahi          #+#    #+#             */
/*   Updated: 2023/07/14 10:42:48 by muebrahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned char	l;
	char			*str;
	char			*ss;

	if (!s)
		return (NULL);
	l = 0;
	while (s[l])
		l++;
	str = malloc(sizeof(*s) * (l + 1));
	if (str)
		str[l] = '\0';
	ss = (char *) s;
	while (str && l && --l)
		str[l] = f(l, s[l]);
	if (str)
		str[l] = f(l, s[l]);
	return (str);
}
