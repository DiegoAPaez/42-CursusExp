/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 19:53:30 by dpaez             #+#    #+#             */
/*   Updated: 2024/09/12 20:31:16 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dupstr;

	dupstr = (char *) malloc(sizeof(src));
	if (!dupstr)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		dupstr[i] = str[i];
		i++;
	}
	dupstr[i] = '\0';
	return (dupstr);
}
