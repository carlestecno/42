#include "libft.h"
#include <string.h>
#include <stdio.h>

void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    char *str;
    char *str1;

    str1 = dst;
    str = src;
    while (n--)
    {
        *str1++ = *str++;
    }    
    return (str1);
}
