/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 23:08:45 by dpaez             #+#    #+#             */
/*   Updated: 2024/09/22 23:18:40 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	resultado;
	int	signo;
	int	i;

	i = 0;
	resultado = 0;
	signo = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r')
		i++;
	if (str[i] == '-')
	{
		signo--;
		i++;
	}
	else
		signo++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultado = resultado * 10 + (str[i] - '0');
		i++;
	}
	return (resultado * signo);
}
