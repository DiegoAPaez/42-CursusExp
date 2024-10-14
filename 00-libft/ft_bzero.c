/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:01:09 by dpaez             #+#    #+#             */
/*   Updated: 2024/09/23 17:05:34 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t n)
{
	char	*temp;

	temp = (char *) dest;
	while (n > 0)
	{
		*temp++ = 0;
		n--;
	}
}
/*
* DESCRIPTION
*   The bzero() function writes n zeroed bytes to the string dest. If n is zero, 
*   bzero() does nothing.
*/
