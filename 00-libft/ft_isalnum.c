/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:41:22 by dpaez             #+#    #+#             */
/*   Updated: 2024/10/14 10:42:20 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int x)
{
	return (ft_isalpha(x) || ft_isdigit(x));
}
/*
* DESCRIPTION
*   The isalnum() function tests for any character for which isalpha(3) or
*   isdigit(3) is true. The value of the argument must be representable as
*   an unsigned char or the value of EOF.
* RETURN VALUES
*   The isalnum() function returns zero if the character tests false and 
*   returns non-zero if the character tests true.
*/
