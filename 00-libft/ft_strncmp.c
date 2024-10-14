/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 22:06:18 by dpaez             #+#    #+#             */
/*   Updated: 2024/09/30 13:52:11 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1 || *s2) && n-- > 0)
		if (*s1++ != *s2++)
			return ((unsigned char)(*--s1) - (unsigned char)(*--s2));
	return (0);
}
/*
* DESCRIPTION
*   The strncmp() function lexicographically compare the null-terminated strings
*   s1 and s2. The strncmp() function compares not more than n characters. 
*   Because strncmp() is designed for comparing strings rather than binary data,
*   characters that appear after a '\0' character are not compared.
* RETURN VALUES
*   The strncmp() function returns an integer greater than, equal to, or less 
*   than 0, according as the string s1 is greater than, equal to, or less than 
*   the string s2. The comparison is done using unsigned characters, so that
*   '\200' is greater than '\0'.
*/
