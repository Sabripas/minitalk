/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:00:54 by ssteveli          #+#    #+#             */
/*   Updated: 2023/10/20 17:05:25 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	int		i;
	char	*new;

	if (!s1 || !s2)
		return (0);
	i = -1;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	new = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!new)
		return (0);
	while (++i < len1)
		new[i] = s1[i];
	i = 0;
	while (i < len2)
	{
		new[i + len1] = s2[i];
		i++;
	}
	new[len1 + i] = 0;
	return (new);
}
