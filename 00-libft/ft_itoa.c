/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 21:06:08 by dpaez             #+#    #+#             */
/*   Updated: 2024/10/17 15:35:33 by dpaez            ###   ########.fr       */
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
* DESCRIPTION
*   Allocate (with malloc) and returns a string representing n.
*   Negative numbers must be handled.
* RETURN VALUES
*   ft_itoa() returns the string representing n; NULL if the memory allocation
*   failed.
*/
