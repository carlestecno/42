
#include "libft.h"
#include <string.h>
#include <stdio.h>

void    *ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
    char *str;
    char *str1;
    size_t i;

    str1 = (char *restrict)dest;
    str = (char *restrict)src;
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
    
    ft_memcpy(dest, str, 1*sizeof(char));
    printf("Lstring0 es de: %s\n", dest);
    memcpy(dest, str, 3*sizeof(int));
    printf("Lstring1 es de: %s\n", dest);
    return (0);
}