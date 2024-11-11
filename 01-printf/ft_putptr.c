/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:59:47 by dpaez             #+#    #+#             */
/*   Updated: 2024/11/11 14:02:09 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(va_list argp)
{
	void	*ptr;
	int		count;

	ptr = va_arg(argp, void *);
	if (ptr == NULL)
		count = ft_putstr("(nil)");
	else
	{
		count = ft_putstr("0x");
		count += ft_putaddress((unsigned long long)ptr);
	}
	return (count);
}
