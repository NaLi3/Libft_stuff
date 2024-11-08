/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:16:33 by ilevy             #+#    #+#             */
/*   Updated: 2024/11/08 18:21:09 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	const unsigned char	*sc1;
	const unsigned char	*sc2;

	i = 0;
	sc1 = (const unsigned char *)s1;
	sc2 = (const unsigned char *)s2;
	while (sc2[i] && i < n && sc1[i] == sc2[i])
	{
		i++;
	}
	if (i >= n)
		return (0);
	return (sc1[i] - sc2[i]);
}
