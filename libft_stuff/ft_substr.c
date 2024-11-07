/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 09:06:43 by ilevy             #+#    #+#             */
/*   Updated: 2024/11/07 09:16:37 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*dup;
	unsigned int	i;

	i = 0;
	dup = (char *)malloc(len * sizeof(char));
	if (!dup)
		return (0);
	while (i < len)
	{
		dup[i] = s[start];
		i++;
		start++;
	}
	dup[i] = 0;
	return (dup);
}

int	main(int argc, char **argv)
{
	printf("%s\n", ft_substr(argv[1], 0, 5));
	return (0);
}
