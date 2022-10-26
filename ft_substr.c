#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t  ft_strlen(const char *str);

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;
    size_t      i;

    str = (char *)malloc(len);
    if (!str)
        return (NULL);
    i = 0;
    while (i < len)
    {
        str[i] = s[start - 1];
        i++;
        start++;
    }
    str[i] = 0;
    return (str);
}

// int main()
// {
//     printf("El valor original es de: %s", ft_substr("Patata", 5, 1 ));
// }