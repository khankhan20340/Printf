/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muebrahi <muebrahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 10:44:21 by muebrahi          #+#    #+#             */
/*   Updated: 2023/07/14 07:55:06 by muebrahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	l;

	l = 0;
	while (s[l])
	{
		ft_putchar_fd (s[l], fd);
		l++;
	}
	ft_putchar_fd ('\n', fd);
}
