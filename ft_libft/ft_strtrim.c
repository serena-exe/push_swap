/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebavaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 09:40:57 by sebavaro          #+#    #+#             */
/*   Updated: 2025/10/20 17:09:59 by sebavaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*trim;

	i = 0;
	j = (ft_strlen(s1) - 1);
	while (is_set(s1[i], set) == 1 && s1[i])
		i++;
	while (is_set(s1[j], set) == 1 && j)
		j--;
	trim = ft_substr(s1, i, j - i + 1);
	if (!trim)
		return (NULL);
	return (trim);
}
