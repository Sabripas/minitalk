/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:44:40 by ssteveli          #+#    #+#             */
/*   Updated: 2023/10/24 11:24:13 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*list;

	count = 0;
	if (!lst)
		return (0);
	list = lst;
	while (list != 0)
	{
		count++;
		list = list->next;
	}
	return (count);
}
