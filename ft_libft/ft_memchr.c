/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebavaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 09:09:49 by sebavaro          #+#    #+#             */
/*   Updated: 2025/10/20 12:45:41 by sebavaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					i;
	unsigned const char		*str;

	str = (unsigned const char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == ((unsigned char)c))
		{
			return ((void *)&str[i]);
		}
		i++;
	}
	return (NULL);
}
