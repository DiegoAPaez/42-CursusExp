/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 20:23:59 by dpaez             #+#    #+#             */
/*   Updated: 2024/09/30 13:38:49 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	while (dst[j] != '\0' && j < size)
		j++;
	i = j;
	while (src[j - i] && j + 1 < size)
	{
		dst[j] = src [j - i];
		j++;
	}
	if (i < size)
		dst[j] = '\0';
	return (i + ft_strlen(src));
}
