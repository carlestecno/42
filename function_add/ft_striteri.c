// #include "libft.h"
#include <stdio.h>
#include <unistd.h>

void ft_printar(unsigned int num, char *c)
{
    write(1, c, 1);
}


void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}


int main()
{
    char str[] = "Patatoes";
    ft_striteri(str, ft_printar);
}
