/* #include "libft.h" */
#include <string.h>
#include <stdio.h>

void    *ft_memmove(void *restrict dest, const void *restrict src, size_t n)
{
    char *str_dest;
    char *str_source;


    str_dest = dest;
    str_source = src;
    while (dest-src)
    {
      *str_dest++ = *str_source++;
    }
    return (str_dest);
}


int main()
{
    char    str[] = "0123456789abcdfghikl";
    char    str2[] = "0123456789abcdfghikl";
    printf("El valor es de: %s", ft_memmove(str + 5 , str  , 6* sizeof(char)));
}