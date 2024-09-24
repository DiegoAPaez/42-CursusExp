/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:41:22 by dpaez             #+#    #+#             */
/*   Updated: 2024/09/19 17:51:00 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int x)
{
	return (ft_isalpha(x) || ft_isdigit(x));
}
/*
ft_isalnum() checks whether the given character is alphanumeric or not.
Alphanumeric: A character that is either a letter or a number.
*/
