#include "libft.h" 
#include <string.h>
#include <stdio.h>

char    *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == (char)c)
        {
            return ((char *)s);
        } 
        s++;
    }
    if (*s == (char)c)
    {
        return ((char *)s);
    }
    return (NULL);
}

// int main(void)
// {
//     printf("meu : %i\n", ft_strchr("Patata", ' '));
//     printf("func original: %s\n", strchr("Patata", ' '));
//     return (0);
// }