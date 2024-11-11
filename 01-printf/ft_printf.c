/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:56:16 by dpaez             #+#    #+#             */
/*   Updated: 2024/11/11 13:55:00 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_check(va_list argp, char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_putchar(va_arg(argp, int));
	else if (c == 's')
		count = ft_putstr(va_arg(argp, char *));
	else if (c == 'p')
		count = ft_putptr(argp);
	else if (c == 'd' || c == 'i')
		count = ft_putnbr(va_arg(argp, int));
	else if (c == 'u')
		count = ft_putunbr(va_arg(argp, unsigned int));
	else if (c == 'x' || c == 'X')
		count = ft_puthex(va_arg(argp, unsigned int), c);
	else if (c == '%')
		return (ft_putchar('%'));
	return (count);
}

int	ft_printf(char const *str, ...)
{
	int		count;
	int		i;
	va_list	argp;

	count = 0;
	i = 0;
	va_start(argp, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] != '\0')
				count += ft_format_check(argp, str[++i]);
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(argp);
	return (count);
}
