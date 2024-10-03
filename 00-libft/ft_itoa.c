/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 21:06:08 by dpaez             #+#    #+#             */
/*   Updated: 2024/10/02 22:14:38 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <limits.h>

int	digit_count(int nb)
{
	int	count;

	count = 0;
	if (nb <= 0)
		count++;
	while (nb)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		digits;

	digits = digit_count(n);
	num = ft_calloc(digits + 1, sizeof(char));
	if (!num)
		return (NULL);
	if (n == 0)
		num[0] = '0';
	if (n < 0)
	{
		num[0] = '-';
		if (n == INT_MIN)
		{
			num[--digits] = '8';
			n /= 10;
		}
		n *= -1;
	}
	while (digits-- && n != 0)
	{
		num[digits] = (n % 10) + '0';
		n /= 10;
	}
	return (num);
}
/*
Utilizando malloc(3), genera una string que represente el valor entero recibido
como argumento. Los números negativos tienen que gestionarse.
Retorno: La string que represente el número.NULL si falla la reserva de memoria.
*/
