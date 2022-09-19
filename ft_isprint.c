#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int ft_isprint(int c)
{
    if (c < 127 && c >= 32) 
        return (1);
    else
        return (0);
    
}

int main()
{
    char    a;
    
    a = '1';
    printf("Si es char 2, 1 ok! : %d\n", ft_isprint(a));
    printf("Si es char 2, 1 ok! : %d", isprint(a));
    return (0);
}