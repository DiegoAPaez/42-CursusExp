/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:35:59 by dpaez             #+#    #+#             */
/*   Updated: 2024/10/14 10:41:23 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
* DESCRIPTION
*   The isdigit() function tests for a decimal digit character.
*   The value of the argument must be representable as an unsigned char or 
*   the value of EOF.
* RETURN VALUES
*   The isdigit() function return zero if the character tests false and return
*   non-zero if the character tests true.
*/
