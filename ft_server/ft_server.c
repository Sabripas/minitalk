/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_server.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:38:18 by ssteveli          #+#    #+#             */
/*   Updated: 2024/01/26 14:52:53 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

char	*g_str;

void	ft_time_to_print(char *g_str)
{
	int	i;

	i = 7;
	ft_printf("%c", ft_atoi(ft_convert_base(g_str, "01", "0123456789")));
	ft_bzero(g_str, 8);
}

void	kill_catch(int signal)
{
	int	i;

	i = 0;
	if (signal == 16)
	{
		while (g_str[i] != 0)
			i++;
		g_str[i] = '1';
	}
	else if (signal == 30)
	{
		while (g_str[i] != 0)
			i++;
		g_str[i] = '0';
	}
	if (ft_strlen(g_str) == 8)
	{
		ft_time_to_print(g_str);
		usleep(500);
	}
}

int	main(void)
{
	ft_printf("%d\n", getpid());
	g_str = ft_calloc(9, sizeof(char));
	signal(30, kill_catch);
	signal(16, kill_catch);
	while (1)
		usleep(150);
}
