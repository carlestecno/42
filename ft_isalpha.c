#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int ft_isalpha(int c)
{
    if (c <= 'Z' && c >= 'A') 
        return (1);
    else if (c <= 'z' && c >= 'a')
        return (2);
    else
        return (0);
}
int main()
{
    char  a;
    char  b;
    char  c;    
    
    a = '4';
    b = 'A';
    c = 'a';
    printf("Si es char 2, 1 ok! : %d\n", ft_isalpha(a));
    printf("Si es char 2, 1 ok! : %d\n", ft_isalpha(b));
    printf("Si es char 2, 1 ok! : %d\n", ft_isalpha(c));
    printf("Si es char 2, 1 ok! : %d\n", isalpha(a));
    printf("Si es char 2, 1 ok! : %d\n", isalpha(b));
    printf("Si es char 2, 1 ok! : %d", isalpha(c));
    return (0);
}