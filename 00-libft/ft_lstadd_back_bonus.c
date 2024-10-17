/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:42:28 by dpaez             #+#    #+#             */
/*   Updated: 2024/10/17 19:36:59 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (lst != NULL && *lst != NULL)
	{
		node = *lst;
		node = ft_lstlast(*lst);
		node->next = new;
		return ;
	}
	*lst = new;
}
/*
* DESCRIPTION
*	Add the 'new' element at the end of the list
* PARAMETERS
*	lst: pointer address of the first element of the list
*	new: pointer address of the new element to add to the list
*/
