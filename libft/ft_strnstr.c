/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:10:15 by ssteveli          #+#    #+#             */
/*   Updated: 2023/10/20 17:16:02 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	int		k;

	i = 0;
	k = 0;
	if (to_find[0] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && i < n)
	{
		if (str[i] == to_find[0])
		{
			k = ft_check_same(str, to_find, i, n);
		}
		if (k == 1)
			return ((char *)str + i);
		i++;
	}
	return (0);
}
