/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:24:56 by ssteveli          #+#    #+#             */
/*   Updated: 2023/10/23 17:15:25 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *a, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;
	unsigned char		d;

	d = c;
	str = a;
	i = 0;
	while (i < n)
	{
		if (str[i] == d)
		{
			a += i;
			return ((unsigned char *)a);
		}
		i++;
	}
	return (0);
}
