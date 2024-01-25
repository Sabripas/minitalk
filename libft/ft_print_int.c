/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:13:01 by ssteveli          #+#    #+#             */
/*   Updated: 2023/10/26 14:28:57 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_int(const char *str, int i, char sign)
{
	long long int	number;
	long long int	test;

	number = 0;
	while (str[i] > 47 && str[i] < 58)
	{
		test = number;
		number = (number * 10) + (str[i] - 48);
		i++;
		if (test > number)
		{
			if (sign == 'a')
				return (0);
			else
				return (-1);
		}
	}
	if (sign == 'a')
		number = number * -1;
	return (number);
}
