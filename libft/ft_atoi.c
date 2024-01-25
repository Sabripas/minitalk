/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:22:55 by ssteveli          #+#    #+#             */
/*   Updated: 2023/10/26 14:23:14 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	char	sign;

	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		sign = 'a';
	else
		sign = 'b';
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] >= '0' && str[i] <= '9')
		return (ft_print_int(str, i, sign));
	else
		return (0);
}
