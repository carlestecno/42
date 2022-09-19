#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int ft_isdigit(int c)
{
    if (c <= '9' && c >= '0') 
        return (1);
    else
        return (0);
}

int main()
{
    char    a;
    
    a = 'a';
    printf("Si es char 2, 1 ok! : %d\n", ft_isdigit(a));
    printf("Si es char 2, 1 ok! : %d", isdigit(a));
    return (0);
}