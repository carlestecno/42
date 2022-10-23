// #include "libft.h"
#include <stdio.h>
#include <unistd.h>

void ft_putchar_ft(char c, int fd)
{
    write(fd, &c, 1);
}

int main()
{
    char c;

    c = 'c';
    ft_putchar_ft('a', 1);
}