/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:38:40 by ilevy             #+#    #+#             */
/*   Updated: 2024/11/09 00:17:37 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_in_set(char c, const char *set);

char	*ft_strtrim(const char *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;
	char			*dup;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen((char *)s1);
	while (ft_in_set(s1[start], set) == 0)
		start++;
	while (ft_in_set(s1[end - 1], set) == 0)
		end--;
	dup = ft_substr(s1, start, end - start);
	return (dup);
}

static int	ft_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set++)
			return (0);
	}
	return (1);
}