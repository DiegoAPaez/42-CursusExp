/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:55:56 by dpaez             #+#    #+#             */
/*   Updated: 2024/11/11 10:57:13 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int		count;

	count = 0;
	if (nb == -2147483648)
	{
		return (write(1, "-2147483648", 11));
	}
	if (nb < 0)
	{
		count += ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		count += ft_putnbr(nb / 10);
		count += nb % 10;
	}
	if (nb < 10)
		count += ft_putchar(nb + 48);
	return (count);
}
