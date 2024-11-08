/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:40:19 by ilevy             #+#    #+#             */
/*   Updated: 2024/11/08 12:54:34 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

int	main(int argc, char **argv)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	lst->content = "salut";
	lst->next = NULL;
	printf("%d\n", ft_lstsize(lst));
	return (0);
}
