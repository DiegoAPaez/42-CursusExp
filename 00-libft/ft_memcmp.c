/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:02:28 by dpaez             #+#    #+#             */
/*   Updated: 2024/09/30 13:21:07 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *p1, const void *p2, size_t size)
{
	unsigned char	*tp1;
	unsigned char	*tp2;

	tp1 = (unsigned char *) p1;
	tp2 = (unsigned char *) p2;
	if (!size)
		return (0);
	while (--size && *tp1 == *tp2)
	{
		tp1++;
		tp2++;
	}
	return ((int)(*tp1 - *tp2));
}
/*
* DESCRIPTION
*   The memcmp() function compares byte string p1 against byte string p2.
*   Both strings are assumed to be size bytes long.
* RETURN VALUES
*   The memcmp() function returns zero if the two strings are identical, 
*   otherwise returns the difference betwee the first two differing bytes
*   (treated as unsigned char values, so that '\200' is greater than '\0',
*   for example).
*   Zero-length strings are always identical. This behaviour is not required
*   by C and portable code should only depend on the sign of the returned value
*/
