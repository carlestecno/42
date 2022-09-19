#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

void    ft_bzero(void *s, size_t n)
{
    char    *new;
    size_t      i;

    new = (char*)s;
    i = 0;
    while (*new)
    {
        *new = '\0';
        i++;
    }
}

int main()
{
    char    str[] = "Patata llangonissa";
    char    *new;

    ft_bzero(str + 7, 1 * sizeof(char));
    printf("El valor del nou_1 str es: %s\n", str);
    bzero(str + 2, 1 * sizeof(char));
    printf("El valor del nou_2 str es: %s\n", str);
    return (0);
}