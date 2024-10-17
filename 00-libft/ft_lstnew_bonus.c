/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:09:24 by dpaez             #+#    #+#             */
/*   Updated: 2024/10/17 16:58:09 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *) malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
* DESCRIPTION
*	Allocate (with malloc(3)) and return the new element. The member 
*	variable 'content' is initialized with the value of the 'content' 
*	parameter. The 'next' variable is initialized to NULL.
* RETURN VALUES
*	The new element.
*/
