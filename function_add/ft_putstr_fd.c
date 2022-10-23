#include "libft.h"
#include <unistd.h>

size_t  ft_strlen(const char *str);

void ft_putstr_fd(char *s, int fd)
{
    write(fd, s, ft_strlen(s));
}

int main()
{
    char str[]= "Patatapo";
    ft_putstr_ft(str, 1);
}