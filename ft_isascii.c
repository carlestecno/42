#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int ft_isascii(int c)
{
    if (c <= 127 && c >= 0) 
        return (1);
    else
        return (0);
    
}

int main()
{
    char    a;
    
    a = -1;
    printf("Si es char 2, 1 ok! : %d\n", ft_isascii(a));
    printf("Si es char 2, 1 ok! : %d", isascii(a));
    return (0);
}