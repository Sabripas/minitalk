/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:50:58 by ssteveli          #+#    #+#             */
/*   Updated: 2023/10/20 17:21:30 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnb_rec(unsigned int nb, int fd)
{
	unsigned int	b;

	b = nb;
	while (nb > 9)
	{
		b = nb % 10;
		nb = ft_putnb_rec(nb / 10, fd);
	}
	b = '0' + b;
	write(fd, &b, 1);
	return (nb);
}

void	ft_putnbr_fd(int n, int fd)
{
	char			a;
	unsigned int	un_nb;

	a = '-';
	if (n < 0)
	{
		write(fd, &a, 1);
		un_nb = n * -1;
	}
	else
	{
		un_nb = n;
	}
	ft_putnb_rec(un_nb, fd);
}
