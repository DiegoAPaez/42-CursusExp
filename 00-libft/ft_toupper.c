/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 20:33:25 by dpaez             #+#    #+#             */
/*   Updated: 2024/09/22 20:38:10 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
* DESCRIPTION
*   The toupper() function converts a lower-case letter to the corresponding
*   upper-case letter. The argument must be representable as an unsigned char 
*   or the value of EOF.
* RETURN VALUES
*   If the argument is a lower-case letter, the toupper() function returns the
*   corresponding upper-casse letter if there is one; otherwise, the argument
*   is returned unchanged.
*/
