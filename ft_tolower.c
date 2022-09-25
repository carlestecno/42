#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int ft_tolower(int c)
{
    if (c <= 'Z' && c >= 'A')
    {
        c += 32;
    }
    return (c);
}