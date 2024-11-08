/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:15:51 by ilevy             #+#    #+#             */
/*   Updated: 2024/11/08 18:33:53 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*new_list;
	t_list	*new_block;

	if (!lst || !f || !del)
		return (0);
	while (lst)
	{
		new_block = ft_lstnew(f(lst->content));
		if (!new_block)
		{
			ft_lstclear(&new_list, del);
			return (0);
		}

		if (!new_list)
			new_list = new_block;
		else
			new_list->next = new_block;
		lst = lst->next;
		new_list = new_list->next;
	}
	return (new_block);
}
