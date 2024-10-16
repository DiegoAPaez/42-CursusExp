/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:01:57 by dpaez             #+#    #+#             */
/*   Updated: 2024/10/15 21:34:57 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			cc;
	unsigned int	i;

	i = 0;
	cc = (char) c;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *) &s[i]);
	return (NULL);
}
/*
* DESCRIPTION
*   The strchr() function locates the first occurence of c (converted to a char)
*   in the string pointed to by s. The terminating null character is considered 
*   to be part of the string; therefor if c is '\0', the function locate the 
*   terminating '\0'.
* RETURN VALUES
*   The function strchr() return a pointer to the located character, or NULL if 
*   the character does not appear in the string.
*/
