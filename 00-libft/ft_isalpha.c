/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:25:03 by dpaez             #+#    #+#             */
/*   Updated: 2024/10/14 10:46:28 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/*
* DECRIPTION
*	The isalpha() function tests for any character for which isupper(3) or
*	islower(3) is true. The value of the argument must be resprensentable
*	as an unsigned char or the value of EOF.
* RETURN VALUES
*	The isalpha() function return zero if the character tests false and
*	returns non-zero if the character tests true.
*/
