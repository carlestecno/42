#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int ft_atoi(const char *nptr)
{
    int i;
    int result;
    int neg;
    
    i = 0;
    neg = 1;
    result = 0;
    while (*nptr == ' ' ||  (*nptr >= 9 && *nptr <= 13))
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
