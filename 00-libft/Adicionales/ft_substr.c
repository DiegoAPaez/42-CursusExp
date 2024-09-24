/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:03:38 by dpaez             #+#    #+#             */
/*   Updated: 2024/09/23 18:27:57 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	sub = (char *) malloc(sizeof(char) * len);
	if (!sub)
		return (NULL);
	while (s[start] != '\0' && len-- > 0)
	{
		sub[i++] = s[start++];
	}
	sub[i] = '\0';
	return (sub);
}
