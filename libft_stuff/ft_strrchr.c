/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:21:43 by ilevy             #+#    #+#             */
/*   Updated: 2024/11/07 10:23:27 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *string, int character)
{
	unsigned int	i;

	i = ft_strlen(string);
	while (i != 0)
	{
		if (string[i] == character)
		{
			return (string[i]);
		}
		i--;
	}
	return (NULL);
}
