/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 22:21:40 by dpaez             #+#    #+#             */
/*   Updated: 2024/09/30 13:49:04 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*tmp;

	tmp = s;
	while (*s)
		s++;
	while (s >= tmp)
		if (*s-- == (char) c)
			return ((char *) s + 1);
	return (NULL);
}
/*
* DESCRIPTION
*   The strrchr() function is identical to strchr(), except it locates the last
*   occurence of c.
* RETURN VALUES
*   The function strrchr() returns a pointer to the located character, or NULL 
*   if the character does not appear in the string.
*/
