/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:43:09 by dpaez             #+#    #+#             */
/*   Updated: 2024/10/17 19:35:54 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst != NULL)
	{
		if (del != NULL && lst->content != NULL)
			(del)(lst->content);
		free(lst);
		lst = NULL;
	}
}
/*
* DESCRIPTION
*	Free the memory of the element passed as parameter using the 'del' 
*	function then free(3). The memory of 'next' must not be freed.
* PARAMETERS
*	lst: the element to free
*	del: address of the function that can delete the element's content
*/
