#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int ft_atoi(const char *nptr)
{
    int a;
    int result;
    int neg;
    
    i = 0;
    neg = 1;
    result = 0;
    while (*nptr == ' ' ||  *nptr == '\t')
    {
        nptr++;
    }
    if (*nptr == '-')
    {
        neg = -1;
        nptr++;
    }
    else if (*nptr == '+')
    {
        nptr++;
    }
    while (*nptr <= '9' && *nptr >= '0')
    {
        result = result * 10 + (*nptr - 48); 
        nptr++;
    }
    return (result * neg);
}


int main(void)
{
    printf("El valor0 es de: %d\n", ft_atoi("  +12563pp90"));
    printf("El valor1 es de: %d", atoi("  +1256356popl78"));
    return (0);
}
