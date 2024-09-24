/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 20:23:59 by dpaez             #+#    #+#             */
/*   Updated: 2024/09/22 20:24:29 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	ldst;
	size_t	lsrc;
	size_t	i;

	ldst = ft_strlen(dest);
	lsrc = ft_strlen(src);
	if (size <= ldst)
		lsrc += size;
	else
		lsrc += ldst;
	i = 0;
	while (src[i] && ldst + 1 < size)
	{
		dest[ldst] = src[i];
		i++;
		ldst++;
	}
	dest[ldst] = '\0';
	return (lsrc);
}
