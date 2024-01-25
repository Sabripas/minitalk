/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:09:11 by ssteveli          #+#    #+#             */
/*   Updated: 2023/10/27 14:48:57 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (((unsigned char *)(s2))[i] != '\0'
		&& ((unsigned char *)s1)[i] != '\0' && i < n)
	{
		if (((unsigned char *)s2)[i] < ((unsigned char *)s1)[i])
			return (1);
		else if (((unsigned char *)s2)[i] > ((unsigned char *)s1)[i])
			return (-1);
		else
			i++;
	}
	if (i >= n)
		return (0);
	return (ft_test_str((unsigned char *)s1, (unsigned char *)s2, i));
}
