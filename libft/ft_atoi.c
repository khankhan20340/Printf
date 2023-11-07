/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muebrahi <muebrahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 10:36:46 by muebrahi          #+#    #+#             */
/*   Updated: 2023/07/14 07:45:22 by muebrahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *ptr)
{
	int	l;
	int	result;
	int	sign;

	l = 0;
	while ((ptr[l] >= 9 && ptr[l] <= 13) || (ptr[l] == ' '))
		l++;
	sign = 1;
	if (ptr[l] == '-')
	{
		sign *= -1;
		l++;
	}
	else if (ptr[l] == '+')
		l++;
	result = 0;
	while (ptr[l] >= '0' && ptr[l] <= '9')
	{
		result = result * 10 + ptr[l] - '0';
		l++;
	}
	return (result * sign);
}
