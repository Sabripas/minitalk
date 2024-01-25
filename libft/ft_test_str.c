/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:07:44 by ssteveli          #+#    #+#             */
/*   Updated: 2023/10/25 14:11:51 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_test_str(const unsigned char *s1, const unsigned char *s2, int i)
{
	if (s1[i] == '\0' && s2[i] == '\0')
	{
		return (0);
	}
	else if (s1[i] != '\0')
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
