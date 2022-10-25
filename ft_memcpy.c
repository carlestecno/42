#include "libft.h"
#include <string.h>
#include <stdio.h>

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    char *str;
    char *str1;

    str1 = dst;
    str = (char*)src;
    while (n--)
    {
        *str1 = *str;
        str1++;
        str++;
    }   
    return (dst);
}

// int main()
// {
//     char *src = "Holabamic";
//     char dest[] = "Adeu  amic";

//     printf("array: %s", ft_memcpy(dest, src, 4));
// }