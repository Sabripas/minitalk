/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:42:51 by ssteveli          #+#    #+#             */
/*   Updated: 2023/10/26 12:31:39 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_revers_memmove(void *dst, const void *src, size_t size)
{
	size_t	i;

	i = size - 1;
	if (size == 0)
	{
		return (dst);
	}
	while (i > 0)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i -= 1;
	}
	((unsigned char *)dst)[0] = ((unsigned char *)src)[0];
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t size)
{
	size_t	i;

	if (dst < src)
	{
		i = 0;
		while (i < size)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
		return (dst);
	}
	if (dst > src)
	{
		return (ft_revers_memmove(dst, src, size));
	}
	return (dst);
}
