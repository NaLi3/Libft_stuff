/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:40:57 by ilevy             #+#    #+#             */
/*   Updated: 2024/11/06 13:07:32 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dst_cp;
	const char	*src_cp;

	if (dest == src || n == 0)
		return (dest);
	if (!dest && !src)
		return (0);
	dest_cp = (char *)dst;
	src_cp = (const char*)src;
	while (n--)
		dest_cp[n] = src_cp[n];
	return (dest);
}