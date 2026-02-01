/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebavaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:36:38 by sebavaro          #+#    #+#             */
/*   Updated: 2025/10/20 12:01:38 by sebavaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	int		i;

	i = 0;
	d = malloc((ft_strlen(s) + 1) * (sizeof(char)));
	if (d == NULL)
		return (NULL);
	while (s[i])
	{
		d[i] = s[i];
		i ++;
	}
	d[i] = '\0';
	return (d);
}
