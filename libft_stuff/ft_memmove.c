/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:28:39 by ilevy             #+#    #+#             */
/*   Updated: 2024/11/07 10:21:21 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest_cp;
	const char	*src_cp;

	dest_cp = (char *)dest;
	src_cp = (const char *)src;
	if (dest == src)
		return (dest);
	if (src_cp < dest_cp)
	{
		while (n--)
			dest_cp[n] = src_cp[n];
		return ((void *)dest_cp);
	}
	while (n--)
		*dest_cp++ = *src_cp++;
	return ((void *)dest_cp);
}
