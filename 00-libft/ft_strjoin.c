/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:29:37 by dpaez             #+#    #+#             */
/*   Updated: 2024/09/23 19:10:44 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	int		j;

	s3 = (char *) malloc(2 * (sizeof(s1) + sizeof(s2)));
	if (!s3)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
		s3[j++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		s3[j++] = s2[i++];
	s3[j] = '\0';
	return (s3);
}
/*
* DESCRIPTION
*   Allocate (with malloc) and returns a new string resulting from the 
*   concatenation of s1 and s2.
* PARAMETERS
*   s1: prefix string
*   s2: suffix string
* RETURN VALUES
*   ft_strjoin() returns the new string; NULL if the memory allocation failed.
*/
