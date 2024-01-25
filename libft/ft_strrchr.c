/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:03:56 by ssteveli          #+#    #+#             */
/*   Updated: 2023/10/23 13:06:55 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	if ((char)c == '\0')
		return ((char *)(s + ft_strlen(s)));
	j = -1;
	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			j = i;
		i++;
	}
	if (j == -1)
		return (0);
	return ((char *)s + j);
}
