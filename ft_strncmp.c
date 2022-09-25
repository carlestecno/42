#include "libft.h"
#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    while (n--)
    {
        if (*s1 != *s2)
        {
            if (*s1 < *s2)
                return (-1);
            else
                return (1);
        }
    }
    return (*s1 - *s2);
}