#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int ft_isprint(int c)
{
    if (c < 127 && c >= 32) 
        return (1);
    else
        return (0);
}