/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:40:50 by ssteveli          #+#    #+#             */
/*   Updated: 2023/10/23 16:58:03 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t size)
{
	size_t				i;
	unsigned char		*dest;
	const unsigned char	*surc;

	if (!dst && !src)
		return (0);
	dest = dst;
	surc = src;
	i = 0;
	while (i < size)
	{
		dest[i] = surc[i];
		i++;
	}
	return (dest);
}
