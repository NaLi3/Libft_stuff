/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 09:48:05 by ilevy             #+#    #+#             */
/*   Updated: 2024/11/07 10:18:36 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*cameleon;

	cameleon = (void *)malloc(size * count);
	if (!cameleon)
		return (0);
	ft_bzero(cameleon, count);
	return (cameleon);
}
