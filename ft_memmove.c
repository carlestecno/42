/* #include "libft.h" */
#include <string.h>
#include <stdio.h>

void    *ft_memmove(void *restrict dest, const void *restrict src, size_t n)
{
    char *str_dest;
    const char *str_source;


    str_dest = dest;
    str_source = src;
    while (dest-src && n--)
    {
      *str_dest++ = *str_source++;
    }
    return (str_dest);
}