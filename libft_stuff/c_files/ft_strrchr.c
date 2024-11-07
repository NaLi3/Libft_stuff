/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:21:43 by ilevy             #+#    #+#             */
/*   Updated: 2024/11/06 15:24:33 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *string)
{
	unsigned int	i;

	i = 0;
	while (string[i])
		i++;
	return (i);
}

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
