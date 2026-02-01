/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebavaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:56:53 by sebavaro          #+#    #+#             */
/*   Updated: 2025/10/20 12:04:17 by sebavaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	if (nmemb == 0 || size == 0)
	{
		tmp = malloc(0);
		if (!tmp)
			return (NULL);
		return (tmp);
	}
	if (nmemb * size / size != nmemb)
		return (NULL);
	tmp = malloc(nmemb * size);
	if (!tmp)
		return (NULL);
	tmp = ft_memset(tmp, 0, nmemb * size);
	return (tmp);
}
