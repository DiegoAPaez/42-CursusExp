/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:51:34 by dpaez             #+#    #+#             */
/*   Updated: 2024/10/03 11:59:57 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	new = (char *) malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new[i] = (*f)(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
* DESCRIPTION
*   Apply the function 'f' to each characters in the string 's' to create a new
*   string (with malloc) resulting of the successive applications of 'f'.
* PARAMETERS
*   s: string over which to iterate
*   f: function to apply to each character
* RETURN VALUES
*   ft_strmapi() returns a new string resulting of the successive applications 
*   of 'f'; NULL if the memory allocations failed.
*/
