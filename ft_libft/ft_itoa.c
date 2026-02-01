/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebavaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 09:05:07 by sebavaro          #+#    #+#             */
/*   Updated: 2025/10/22 12:08:45 by sebavaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	size_nb(int nb)
{
	int	size;

	size = 0;
	if (nb < 0)
	{
		nb *= -1;
		size ++;
	}
	while (nb)
	{
		nb = nb / 10;
		size ++;
	}
	return (size);
}

char	*add_str(char *str, int i, int n)
{
	int	is_negative;

	is_negative = 0;
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
		is_negative = 1;
	}
	while (i-- > is_negative)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;

	i = size_nb(n);
	if (n == 0)
	{
		str = ft_strdup("0");
		return (str);
	}
	if (n == -2147483648)
	{
		str = ft_strdup("-2147483648");
		return (str);
	}
	str = malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[i] = '\0';
	add_str(str, i, n);
	return (str);
}
