/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_to_sep.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:02:49 by ssteveli          #+#    #+#             */
/*   Updated: 2023/10/20 13:45:37 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len_to_sep(const char *s, char c, int i)
{
	int	len_to_sepa;

	len_to_sepa = 0;
	while (s[i] != c && s[i])
	{
		len_to_sepa++;
		i++;
	}
	return (len_to_sepa);
}
