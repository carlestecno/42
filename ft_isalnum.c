#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int ft_isprint(int c)
{
    if (c <= 'Z' && c >= 'A') 
        return (1);
    else if (c <= 'z' && c >= 'a')
        return (2);
    else if (c <= '9' && c >= '0')
        return (4);
    else 
        return (0);
}

int main()
{
    char    a;
    
    a = '1';
    printf("Si es char 2, 1 ok! : %d\n", ft_isprint(a));
    printf("Si es char 2, 1 ok! : %d", isalnum(a));
    return (0);
}