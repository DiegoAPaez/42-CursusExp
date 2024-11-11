/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:46:38 by dpaez             #+#    #+#             */
/*   Updated: 2024/11/06 11:49:23 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(char const *str, ...);
int	ft_putaddress(unsigned long long nb);
int	ft_putchar(char c);
int	ft_puthex(unsigned int nb, char base);
int	ft_putnbr(int nb);
int	ft_putstr(char *s);
int	ft_putunbr(unsigned int nb);

#endif
