#include "libft.h"
#include <string.h>
#include <stdio.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    char    *str;

    str = (char*)s;
    i = 0;
    while (str[i] && (i <= n))
    {
        if (str[i] == c )
        {
            return (s);
        }
        i++;
    }
    return (0); 
}

int main(void)
{
    /* printf("El valor de: %s", ft_memchr("Patata", 't', 2 * sizeof(char))); */
    printf("El valor de: %s", memchr("Patata", 't', 2 * sizeof(char)));
    return (0);
}