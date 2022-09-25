#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int ft_alnum(int c)
{
    if (c <= 'Z' && c >= 'A') 
        return (1);
    else if (c <= 'z' && c >= 'a')
        return (2);
    else if (c <= '9' && c >= '0')
        return (4);
    else 
        return (0);
}