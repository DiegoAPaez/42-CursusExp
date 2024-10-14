/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:03:38 by dpaez             #+#    #+#             */
/*   Updated: 2024/10/01 18:29:13 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	sub = (char *) malloc(sizeof(char) * len + 1);
	if (!sub)
		return (NULL);
	while (s[start] != '\0' && len-- > 0)
	{
		sub[i++] = s[start++];
	}
	sub[i] = '\0';
	return (sub);
}
/*
* DESCRIPTION
*   Allocate (with malloc) and return a new string from the string s.
*   This new string starts at index 'start' and has a maximum size of 'len'.
* PARAMETERS
*   s: string from which to extract the new string
*   start: start index of the new string in the string 's'
*   len: maximum size of the new string
* RETURN VALUES
*   ft_substr() returns the new string; NULL if the memory allocation failed.
*/
