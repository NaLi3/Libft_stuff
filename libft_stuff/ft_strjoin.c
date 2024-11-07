/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 09:13:19 by ilevy             #+#    #+#             */
/*   Updated: 2024/11/07 09:30:13 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	index;
	char	*join;

	i = ft_strlen((char *) s1);
	j = ft_strlen((char *) s2);
	index = 0;
	join = (char *)malloc((i + j + 1) *sizeof(char));
	if (!join)
		return (0);
	while (index < i)
		join[index++] = s1[index];
	index = 0;
	while (index < j)
		join[index++ + i] = s2[index];
	join[index + i] = 0;
	return (join);
}

int	main(int argc, char **argv)
{
	printf ("%s\n", ft_strjoin(argv[1], argv[2]));
	return (0);
}
