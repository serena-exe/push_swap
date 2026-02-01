/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebavaro <sebavaro@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 09:25:55 by sebavaro          #+#    #+#             */
/*   Updated: 2025/10/24 09:31:25 by sebavaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int c, int fd)
{
	if (fd < 0)
		return ;
	if (c == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	else if (c < 0)
	{
		c = c * -1;
		write(fd, "-", 1);
	}
	if (c <= 9)
	{
		c = c + '0';
		write(fd, &c, 1);
	}
	else
	{
		ft_putnbr_fd(c / 10, fd);
		ft_putnbr_fd(c % 10, fd);
	}
}
