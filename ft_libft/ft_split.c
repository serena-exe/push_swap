/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebavaro <sebavaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 08:21:50 by sebavaro          #+#    #+#             */
/*   Updated: 2025/11/03 14:43:59 by sebavaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(char const *str, char c)
{
	int	word;
	int	i;

	i = 0;
	word = 0;
	if (str[0] != c && str[0] != '\0')
		word = 1;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c && str[i + 1] != '\0')
			word ++;
		i++;
	}
	return (word);
}

void	*free_arr(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i ++;
	}
	free(array);
	return (NULL);
}

char	*fill(const char *str, char c)
{
	char	*tab;
	int		i;

	i = 0;
	while (str[i] && str[i] != c)
		i ++;
	tab = ft_calloc(i + 1, sizeof(char));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != c)
	{
		tab[i] = str[i];
		i ++;
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		tab;
	int		i;

	tab = 0;
	i = 0;
	array = ft_calloc((word_count((char *)s, c) + 1), sizeof(char *));
	if (!s || !array)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			array[tab] = fill(&s[i], c);
			if (!array[tab++])
				return (free_arr(array));
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (array);
}
