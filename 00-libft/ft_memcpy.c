/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 10:50:48 by dpaez             #+#    #+#             */
/*   Updated: 2024/09/22 10:31:07 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void *src, size_t nb)
{
	unsigned char	*tmp_dest;
	unsigned char	*tmp_src;

	if (!dest && !src)
		return (dest);
	tmp_dest = (unsigned char *) dest;
	tmp_src = (unsigned char *) src;
	while (nb > 0)
	{
		*tmp_dest++ = *tmp_src++;
		nb--;
	}
	return (dest);
}
/*
* DESCRIPTION
*   The memcpy() function copies n bytes from memory area src to memory area
*   dest. If dest and src overlap, behavior is undefined. Applications in 
*   which dest and src might overlap should use memove instead.
* RETURN VALUES
*   The memcpy() function returns the original value of dest
*/
