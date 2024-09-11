/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:56:13 by dpaez             #+#    #+#             */
/*   Updated: 2024/09/11 17:10:10 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	resultado;
	int	i;

	resultado = 0;
	i = 0;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		if (i == 0)
		{
			resultado = 1;
			i++;
			continue ;
		}
		resultado = resultado * i;
		i++;
	}
	return (resultado);
}
