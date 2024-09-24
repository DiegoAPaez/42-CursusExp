/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:05:02 by dpaez             #+#    #+#             */
/*   Updated: 2024/09/19 18:07:05 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
Used to check if a character passed as the argument is a printable character
or not.

digits ( 0123456789 )
uppercase letters ( ABCDEFGHIJKLMNOPQRSTUVWXYZ )
lowercase letters ( abcdefghijklmnopqrstuvwxyz )
punctuation characters ( !”#$%&'()*+,-./:;?@[\]^_`{ | }~ )
space ( )
*/
