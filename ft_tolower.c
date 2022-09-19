#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int ft_tolower(int c)
{
    if (c <= 'Z' && c >= 'A')
    {
        c += 32;
    }
    return (c);
}

int main(void)
{
    printf("El valor es de: %d\n", ft_tolower(' '));
    printf("El valor es de: %d", tolower(' '));
    return (0);
}