/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:38:44 by dpaez             #+#    #+#             */
/*   Updated: 2024/11/11 10:50:49 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int nb, char base)
{
	int		count;
	char	*base_min;
	char	*base_may;

	count = 0;
	base_min = "0123456789abcdef";
	base_may = "0123456789ABCDEF";
	if (nb >= 16)
	{
		count += ft_puthex(nb / 16, base);
		count += ft_puthex(nb % 16, base);
	}
	else
	{
		if (base == 'X')
			count += ft_putchar(base_may[nb % 16]);
		else
			count += ft_putchar(base_min[nb % 16]);
	}
	return (count);
}
