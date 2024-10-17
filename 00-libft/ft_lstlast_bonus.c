/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:38:08 by dpaez             #+#    #+#             */
/*   Updated: 2024/10/17 18:57:57 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*i;

	if (!lst)
		return (NULL);
	i = lst;
	while (i->next)
		i = i->next;
	return (i);
}
/*
* DESCRIPTION
*	Returns the last element of the list
*/
