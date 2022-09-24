#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

void    ft_bzero(void *s, size_t n)
{
    char    *new;

    new = (char*)s;
    while (*new && n > 0)
    {
        *new = '\0';
        new++;
        n--;
    }
}