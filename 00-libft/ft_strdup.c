/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:33:53 by dpaez             #+#    #+#             */
/*   Updated: 2024/09/30 13:26:15 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	int		i;
	char	*dupstr;

	dupstr = (char *) malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!dupstr)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dupstr[i] = src[i];
		i++;
	}
	dupstr[i] = '\0';
	return (dupstr);
}
/*
* DESCRIPTION
*   The strdup() function allocates sufficient memory for a copy of the string
*   src, does the copy, and returns a pointer to it. The pointer may 
*   subsequently be used as an argument to the function free.
*   If insufficient memory is available, NULL is returned.
*/
