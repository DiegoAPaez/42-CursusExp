/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:30:29 by dpaez             #+#    #+#             */
/*   Updated: 2024/09/24 18:51:52 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_contains(const char *s, char c)
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

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strtrim(const char*s1, const char *set)
{
	char	*trim;
	int		i;
	int		j;
	int		len;

	trim = (char *) malloc(sizeof(s1));
	if (!trim)
		return (NULL);
	i = 0;
	len = ft_strlen(s1) - 1;
	while (ft_contains(set, s1[i]))
		i++;
	while (ft_contains(set, s1[len]))
		len--;
	j = 0;
	while (i <= len)
	{
		trim[j++] = s1[i++];
	}
	trim[j] = '\0';
	return (trim);
}
