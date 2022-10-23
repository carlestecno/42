#include "libft.h"
#include <unistd.h>

size_t  ft_strlen(const char *str);

void ft_putendl_fd(char *s, int fd)
{
    write(fd, s, strlen(s));
    write(fd, "\n", 1);
}

int main()
{
    char str[]= "Patatapo";
    char str1[]= "Patatapo";
    ft_putendl_fd(str, 1);
    ft_putendl_fd(str1, 1);
}