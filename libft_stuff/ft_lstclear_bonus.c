/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:48:46 by ilevy             #+#    #+#             */
/*   Updated: 2024/11/08 13:56:15 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		del(*lst->content);
		del(*lst->next)
	}
	*lst->next = NULL;
}

int	main(int argc, char **argv)
{
	t_list	*lst;
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	lst = (t_list *)malloc(sizeof(t_list));
	new->content = argv[1];
	lst->content = argv[2];
	new->next = NULL;
	lst->next = NULL;
	ft_lstadd_back(&lst, new);
	return (0);
}

