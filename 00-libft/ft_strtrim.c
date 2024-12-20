/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:30:29 by dpaez             #+#    #+#             */
/*   Updated: 2024/10/17 15:33:14 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	contains_char(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*new_str(const char *s1, size_t start, size_t len)
{
	char	*str;
	size_t	i;

	if (len <= 0 || start >= ft_strlen(s1))
		return (ft_strdup(""));
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s1[start + i];
		i++;
	}
	return (str);
}

char	*ft_strtrim(const char*s1, const char *set)
{
	int		i;
	int		len;

	i = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	len = ft_strlen(s1) - 1;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (contains_char(set, s1[i]))
		i++;
	while (contains_char(set, s1[len]))
		len--;
	return (new_str(s1, i, len - (i - 1)));
}
/*
* DESCRIPTION
*   Allocate (with malloc) and returns a copy of s1, without the characters 
*   specified in set at the beginning and the end of s1.
* PARAMETERS
*   s1: string to trim
*   set: characters to trim
* RETURN VALUES
*   ft_strtrim() returns a trimmed copy of s1; NULL if the memory allocation
*   failed.
*/
