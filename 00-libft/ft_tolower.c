/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 20:38:50 by dpaez             #+#    #+#             */
/*   Updated: 2024/09/22 20:39:20 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
* DESCRIPTION
*   The tolower() function converts an upper-case letter to the corresponding 
*   lower-case letter. The argument must be representable as an unsigned char 
*   or the value of EOF.
* RETURN VALUES
*   If the argument is an upper-case letter, the tolower() function returns 
*   the corresponding lower-case letter if there is one; otherwise, the argument
*   is returned unchanged.
*/
