/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 23:21:31 by dpaez             #+#    #+#             */
/*   Updated: 2024/09/30 13:19:26 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *p, int value, size_t size)
{
	unsigned char	*temp;

	temp = (unsigned char *) p;
	while (size--)
	{
		if (*temp++ == (unsigned char) value)
			return (temp - 1);
	}
	return (NULL);
}
