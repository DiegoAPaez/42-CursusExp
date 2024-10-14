/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:05:02 by dpaez             #+#    #+#             */
/*   Updated: 2024/10/14 10:45:13 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
* DESCRIPTION
*	The isprint() function tests for any printing character, including space.
* 	The value of the argument must representable as an unsigned char or the
*	value of EOF.
* RETURN VALUES
*	The isprint() function returns zero if the character tests false and
*	returns non-zero if the character tests true.
*/
