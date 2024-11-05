/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:48:15 by ilevy             #+#    #+#             */
/*   Updated: 2024/11/05 19:59:21 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	length;

	if (s == 0)
		return (0);
	length = 0;
	while (length < n)
	{
		*(unsigned char *)(s + length) = (unsigned char) c;
		length++;
	}
	return (s);
}
