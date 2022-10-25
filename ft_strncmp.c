#include "libft.h"
#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned char    a;
    unsigned char    b;

    while (n-- && (*s1 || *s2))
    {
        a = (unsigned char)*s1;
        b = (unsigned char)*s2;
        if (a != b)
        {
            return (a - b);      
        }
        s1++;
        s2++;
    }
    return (0);
}