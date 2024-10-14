/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:37:54 by dpaez             #+#    #+#             */
/*   Updated: 2024/09/30 13:16:37 by dpaez            ###   ########.fr       */
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
	ft_bzero(tmp, count * size);
	return (tmp);
}
/*
* DESCRIPTION
*   The calloc() function allocates memory.
*   The allocated memory is aligned such that it can be used for any data type.
*   The calloc() function contigously allocates enough space for count objects 
*   that are size bytes of memory each and returns a pointer to the allocated 
*   memory. The allocated memory is filled with bytes of value zero.
* RETURN VALUES
*   If successful, calloc() returns a pointer to allocated memory. If there is 
*   an error, they return a NULL pointer.
*/
