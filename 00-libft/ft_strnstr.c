/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:57:09 by dpaez             #+#    #+#             */
/*   Updated: 2024/09/23 11:32:02 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*small)
		return ((char *) big);
	while (big[i] && i < len)
	{
		while (big[i + j] == small [j] && big[i + j] && i + j < len)
		{
			j++;
			if (small[j] == '\0')
				return ((char *) big + i);
		}
		i++;
		j = 0;
	}
	return (0);
}
/*
* DESCRIPTION
*   The strnstr() function locates the first occurence of the null-terminated 
*   string small in the string big, where not more than len characters are 
*   searched.
*   Characters that appear after a '\0' character are not searched.
* RETURN VALUES
*   If small is an empty string, big is returned; if small occurs nowhere in 
*   big, NULL is returned; otherwise a pointer to the first character of the 
*   first occurence of small is returned.
*/
