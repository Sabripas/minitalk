/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:24:45 by ssteveli          #+#    #+#             */
/*   Updated: 2023/10/26 14:30:41 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_of_set(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) != 0 && i < j)
	{
		i++;
	}
	while (ft_strchr(set, s1[j - 1]) != 0 && j > i)
	{
		j--;
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*new;

	if (!s1 || !set)
		return (0);
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	new = malloc(((ft_strlen(s1) + 1) - num_of_set(s1, set)) * sizeof(char));
	if (!new)
		return (0);
	i = 0;
	j = ft_strlen(s1);
	k = 0;
	while (ft_strchr(set, s1[i]) != 0)
		i++;
	while (ft_strchr(set, s1[j]) != 0)
		j--;
	while (i <= j)
		new[k++] = s1[i++];
	new[k] = 0;
	return (new);
}
