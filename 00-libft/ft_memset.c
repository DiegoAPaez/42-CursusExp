/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:41:37 by dpaez             #+#    #+#             */
/*   Updated: 2024/09/19 20:28:12 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int ch, size_t count)
{
	unsigned char	*temp;

	temp = (unsigned char *) dest;
	while (count > 0)
	{
		*temp++ = (unsigned char) ch;
		count--;
	}
	return (dest);
}
