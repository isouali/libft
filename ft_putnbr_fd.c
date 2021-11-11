/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 19:53:51 by isouali           #+#    #+#             */
/*   Updated: 2021/11/11 20:20:34 by isouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	y;

	y = n;
	if (y < 0)
	{
		ft_putchar_fd('-', fd);
		y *= -1;
	}
	if (y > 9)
	{
		ft_putnbr_fd(y / 10, fd);
		ft_putnbr_fd(y % 10, fd);
	}
	else
		ft_putchar_fd(y + 48, fd);
}
