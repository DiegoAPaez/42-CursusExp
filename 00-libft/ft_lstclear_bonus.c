/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:43:58 by dpaez             #+#    #+#             */
/*   Updated: 2024/10/17 18:42:13 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	free(*lst);
	*lst = NULL;
}
/*
* DESCRIPTION
*	Deletes and free the memory of the element passed as parameter and all 
*	the following elements using 'del' and free(3). Finally, the initial 
*	pointer must be set to NULL.
* PARAMETERS
*	lst: pointer address to one element
*	del: address of the function that can delete the element's content
*/
