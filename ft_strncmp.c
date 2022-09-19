#include "libft.h"
#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    i = 0;
    while (i <= n)
    {
        if (s1[i] != s2[i])
        {
            if (s1[i] < s2[i])
                return (-1);
            else
                return (1);
        }
        i++;
    }
    return (s1[i] - s2[i]);
}


int main()
{
    char    *str;

    printf("el valor es: %d\n", strncmp("zatatata", "bbtata", 1* sizeof(char)));
    printf("el valor es: %d", ft_strncmp("zatatata", "bbtata", 1 * sizeof(char)));
    return (0);
}