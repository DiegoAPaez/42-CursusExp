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
/*
* DESCRIPTION
*   The strlcat() function take the full size of the destination buffer and 
*   guarantee NUL-termination if there is room. Note that room for the NUL should
*   be included in size. Also note that strlcat() only operate on true ''C''
*   strings. This means that both src and dst must be NUL-terminated.
*   strlcat() appends string src to the end of dst. It will append at most
*   size - strlen(dst) - 1 characters. It will then NUL-terminate, unless size
*   is 0 or the original dst string was longer than size.
*   If the src and dst strings overlap, the behavior is undefinded.
* RETURN VALUES
*   Return the total length of the string it tried to create. That means the
*   initial length of dst plus the length of src.
*   If the return value is >= size, the output string has been truncated.
*   It is the caller's responsibility to handle this.
*/
