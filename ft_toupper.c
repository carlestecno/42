#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int ft_toupper(int c)
{
    if (c <= 'z' && c >= 'a')
    {
        c -= 32;
    }
    return (c);
}

int main(void)
{
    printf("El valor es de: %d\n", ft_toupper(' '));
    printf("El valor es de: %d", toupper(' '));
    return (0);
}