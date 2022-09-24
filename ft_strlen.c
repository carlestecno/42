#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t  ft_strlen(const char *str)
{
    size_t  i;

    i = 0;
    while (*str)
    {
        str++;
        i++;
    }
    return (i);
}