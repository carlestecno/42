#include "libft.h"
#include <string.h>
#include <stdio.h>

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    char *str;
    char *str1;
    size_t i;

    str1 = (char *)dest;
    str = (char *)src;
    i = 0;
    while (i < n)
    {
        str1[i] = str[i];
        i++;
    }    
    return (str1);
}

int main()
{
    char    str[] = "Patata de llangonissa";
    char    dest[50];
    
    ft_memmove(dest, str, 1*sizeof(int));
    printf("Lstring0 es de: %s\n", dest);
    memmove(dest, str, 3*sizeof(int));
    printf("Lstring1 es de: %s\n", dest);
    return (0);
}