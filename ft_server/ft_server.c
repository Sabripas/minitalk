#include "../include/minitalk.h"

char *str;

void ft_time_to_print(char *str)
{
    int i;

    i = 7;
    ft_printf("%c", ft_atoi(ft_convert_base(str, "01", "0123456789")));
    while(i >= 0)
    {
        str[i] = 0;
        i--;
    }
}

void kill_catch(int signal)
{
    int i;

    i = 0;
    if (signal == 16)
    {
        while(str[i] != 0)
        {
            i++;
        }
        str[i] = '1';
    }
    else if (signal == 30)
    {
        while(str[i] != 0)
        {
            i++;
        }
        str[i] = '0';
    }
    if(ft_strlen(str) == 8)
        ft_time_to_print(str);
}

int main()
{
    ft_printf("%d\n", getpid());
    str = ft_calloc(9, sizeof(char));
    while (1)
    {
        signal(30, kill_catch);
        signal(16, kill_catch);
    }
}