/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbudding <sbudding@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:21:04 by sbudding          #+#    #+#             */
/*   Updated: 2020/11/04 16:48:44 by sbudding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Parameters
** 	#1.  The adress of a pointer to an element.
**	#2.  The adress of the function used to delete the content of the element.
**
** Description
** 	Deletes and frees the given element and every successor of that element,
**	using the function ’del’ and free(3).
**	Finally, the pointer to the list must be set to NULL.
*/
#include "libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
