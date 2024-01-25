/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:21:44 by ssteveli          #+#    #+#             */
/*   Updated: 2023/10/27 15:25:05 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*new;
	t_list	*first;

	if (!f || !del || !lst)
		return (0);
	temp = lst;
	new = 0;
	first = new;
	while (temp != 0)
	{
		new = ft_lstnew(f(temp->content));
		if (!new)
		{
			del(&(temp->content));
			ft_lstclear(&first, del);
			return (0);
		}
		ft_lstadd_back(&first, new);
		temp = temp->next;
	}
	return (first);
}
