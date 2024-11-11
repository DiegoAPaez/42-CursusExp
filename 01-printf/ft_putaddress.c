/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:45:11 by dpaez             #+#    #+#             */
/*   Updated: 2024/11/11 10:53:44 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putaddress(unsigned long long nb)
{
	int		count;
	char	*base_min;

	count = 0;
	base_min = "0123456789abcdef";
	if (nb >= 16)
	{
		count += ft_putaddress(nb / 16);
		count += ft_putaddress(nb % 16);
	}
	else
		count += ft_putchar(base_min[nb % 16]);
	return (count);
}
