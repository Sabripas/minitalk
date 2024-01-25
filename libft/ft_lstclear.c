/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:11:11 by ssteveli          #+#    #+#             */
/*   Updated: 2023/10/24 12:24:54 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*temp2;

	if (!del || !lst || !(*lst)) 
		return ;
	temp = *lst;
	while (temp != 0)
	{
		temp2 = temp->next;
		ft_lstdelone(temp, del);
		temp = temp2;
	}
	*lst = 0;
}
