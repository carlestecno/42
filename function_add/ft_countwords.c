#include <stdio.h>

size_t  ft_countwords(char *str, char c)
{
    size_t  count;
    int flag;

    flag = 0;
    count = 0;
    while (*str)
    {
        if (*str == c)
        {
            flag = 0;    
        }
        else if(*str != c && flag == 0)
        {
            flag = 1;
            count++;
        }
        str++;
    }
    return (count);
}
