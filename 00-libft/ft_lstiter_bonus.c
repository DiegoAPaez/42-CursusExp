/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:44:47 by dpaez             #+#    #+#             */
/*   Updated: 2024/10/17 18:27:52 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*i;

	if (!lst || !(f))
		return ;
	i = lst;
	while (i != NULL)
	{
		(*f)(i->content);
		i = i->next;
	}
}
/*
* DESCRIPTION
*	Iterate over the list 'lst' and apply the function 'f' to the content 
*	of all elements.
* PARAMETERS
*	lst: pointer address to one element
*	f: function to apply
*/
