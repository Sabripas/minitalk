/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:31:22 by ssteveli          #+#    #+#             */
/*   Updated: 2023/10/26 12:36:12 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s3;
	const unsigned char	*s4;

	if (!s1 && !s2)
		return (0);
	s3 = s1;
	s4 = s2;
	i = 0;
	while (i < n)
	{
		if (s4[i] != s3[i])
			return (s3[i] - s4[i]);
		i++;
	}
	return (0);
}
