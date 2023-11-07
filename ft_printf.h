/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muebrahi <muebrahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 22:20:06 by muebrahi          #+#    #+#             */
/*   Updated: 2023/11/06 13:32:25 by muebrahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define HEX_UPP_BASE "0123456789ABCDEF"
# define HEX_LOW_BASE "0123456789abcdef"

int		ft_printf(char const *str, ...);

void	ft_putchar_pf(char c, size_t *counter);
void	ft_putnbr_pf(int num, size_t *counter);
void	ft_putstr_pf(char *str, size_t *counter);
void	ft_putuint_pf(unsigned int num, size_t *counter);
void	ft_putptr_pf(void *ptr, size_t *counter);
void	ft_puthex_pf(unsigned int num, size_t *counter, char *base);

char	*ft_aux_pf(unsigned long long n, char *base);

#endif
