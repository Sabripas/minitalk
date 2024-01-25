/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_client.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:49:53 by marvin            #+#    #+#             */
/*   Updated: 2024/01/23 13:49:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"
#include <signal.h>

void ft_free(char **str)
{
    int i;

    i = 0;
    while(str[i])
    {
        free(str[i]);
        i++;
    }
    free(str);
}

void ft_send(char **str, int adresse)
{
    int i;
    int j;

    i = 0;
    while (str[i])
    {
        j = 0;
        while (str[i][j] != 0)
        {
            if(str[i][j] == '0')
                kill(adresse, 30);
            if (str[i][j] == '1')
                kill(adresse, 16);
            j++;
            usleep(100);
        }
        i++;
        usleep(100);
    }
    ft_free(str);
    ft_printf("end");
}

char *to_height(char *temp, int len)
{
    int i;
    int j;
    char *str;

    j = 0;
    i = 8 - len;
    str = ft_calloc(9, sizeof(char));
    str[0] = '0';
    str[1] = '0';
    while(i < 8)
    {
        str[i] = temp[j]; 
        i++;
        j++;
    }
    free(temp);
    return (str);
}

char **ft_convert(char *str)
{
    char **convert;
    int i;
    int len;
    char *temp;
    char *temp2;

    convert = ft_calloc(ft_strlen(str) + 1, sizeof(char *));
    i = 0;
    while (str[i])
    {
        temp2 = ft_itoa((int)str[i]);
        temp = ft_convert_base(temp2, "0123456789", "01");
        free(temp2);
        len = ft_strlen(temp);
        convert[i] = to_height(temp, len);
        i++;
    }
    return (convert);
}

int main(int ac, char **av)
{
    if (ac != 3)
    {
        ft_printf("not good amont of args");
        return (0);
    }
    ft_send(ft_convert(av[2]), ft_atoi(av[1]));
    return  (0);
}
