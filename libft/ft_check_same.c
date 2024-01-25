/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_same.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:10:28 by ssteveli          #+#    #+#             */
/*   Updated: 2023/10/19 12:43:36 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_same(const char *str, const char *to_find, int i, size_t n)
{
	int	j;

	j = 0;
	while (to_find[j] != '\0')
	{
		if (to_find[j] != str[i] || (size_t)i >= n)
		{
			return (0);
		}
		else
		{
			j++;
			i++;
		}
	}
	return (1);
}
