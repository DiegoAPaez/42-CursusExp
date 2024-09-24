/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:37:54 by dpaez             #+#    #+#             */
/*   Updated: 2024/09/23 11:57:51 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*tmp;

	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	while (*tmp)
		*tmp++ = 0;
	return ((void *) tmp);
}
