/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:11:31 by ssteveli          #+#    #+#             */
/*   Updated: 2023/10/18 15:18:46 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len_num(const char *str, int i)
{
	int	k;
	int	size;

	size = 0;
	k = i;
	while (str[k] > 47 && str[k] < 58)
	{
		size++;
		k++;
	}
	return (size);
}
