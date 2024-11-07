/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:16:22 by ilevy             #+#    #+#             */
/*   Updated: 2024/11/06 15:19:45 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *string, int character)
{
	unsigned int	i;

	i = 0;
	while (string[i])
	{
		if (string[i] == character)
			return (string[i]);
		i++;
	}
	return (NULL);
}
