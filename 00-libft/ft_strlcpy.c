/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 20:21:50 by dpaez             #+#    #+#             */
/*   Updated: 2024/09/30 13:43:33 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (!src || !dst)
		return (0);
	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
* DESCRIPTION
*   The strlcpy() function take the full size of the destination buffer and 
*   guarantee NUL-termination if there is room. Note that room for the NUL 
*   should be included in dstsize. Also note that strlcpy() only operate on
*   true ''C'' strings. This means that for strlcpy() src must be NUL-terminated.
*   strlcpy() copies up to size - 1 characters from the string src to dst,
*   NUL-terminating the result if dstsize is not 0.
*   If the src and dst strings overlap, the behavior is undefined.
* RETURN VALUES
*   The strlcpy() function return the total length of the strings it tried to
*   create. That means the length of src.
*   If the return value is >= size, the output string has been truncated.
*   It is the caller's responsibility to handle this.
*/
