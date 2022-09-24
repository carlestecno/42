#include "libft.h"
#include <string.h>
#include <stdio.h>

void    *ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
    char *str;
    char *str1;

    str1 = (char *)dest;
    str = (char *)src;
    while (n--)
    {
        *str1++ = *str++;
    }    
    return (str1);
}