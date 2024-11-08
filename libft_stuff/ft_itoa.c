/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 00:43:57 by ilevy             #+#    #+#             */
/*   Updated: 2024/11/08 01:17:06 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_size(long n)
{
	size_t size;

	size = 0;
	if (n < 0)
	{
		n *= -1;
		size = 1;
	}
	if (n == 0)
		size = 1;
	else
	{
		while (n)
		{
			n /= 10;
			size++;
		}
	}
	return (size);
}

char	*ft_itoa(int n)
{
	size_t size;
	long nb;
	char *str;
	int	neg;

	size = count_size((long) n);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	nb = (long) n;
	is_negative = 0;
	if (nb < 0)
	{
		nb *= -1;
		str[0] = '-'
			neg = 1;
	}
	str[size] = '\0';
	while (size > (size_t) neg)
	{
		str[size - 1] = nb % 10 + '0';
		nb /= 10;
		size--;
	}
	return (str);
}
