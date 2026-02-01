/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebavaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 08:14:07 by sebavaro          #+#    #+#             */
/*   Updated: 2025/10/20 17:12:19 by sebavaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*str;
	size_t		size;

	i = 0;
	if (start > ft_strlen(s))
	{
		str = ft_strdup("");
		return (str);
	}
	size = ft_strlen(s + start);
	if (size > len)
		size = len;
	if (!s)
		return (NULL);
	str = (char *)malloc((size + 1) * (sizeof(char)));
	if (!str)
		return (NULL);
	while (i < len && s[start + i])
	{
		str[i] = s[start + i];
		i ++;
	}
	str[i] = '\0';
	return (str);
}
