/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 10:45:28 by dpaez             #+#    #+#             */
/*   Updated: 2024/09/30 12:08:28 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*t_dst;
	unsigned char	*t_src;
	size_t			i;

	if (!dst && !src)
		return (dst);
	i = 0;
	t_dst = (unsigned char *) dst;
	t_src = (unsigned char *) src;
	if (t_dst > t_src)
		while (len-- > 0)
			t_dst[len] = t_src[len];
	else
	{
		while (i < len)
		{
			t_dst[i] = t_src[i];
			i++;
		}
	}
	return (dst);
}
/*
* DESCRIPTION
*   The memmove() function copies len bytes from string src to string dst.
*   The two strings may overlap; the copy is always done in a non-destructive
*   manner.
* RETURN VALUES
*   The memmove() function returns the original value of dst.
*/
