/* #include "libft.h" */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t  ft_strlen(const char *str);

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *str;
    size_t      i;
    size_t      j;
    
    str = (char *)malloc(strlen(s1) + strlen(s2));
    if (!str)
    {
        printf("No hi ha malloc");
    }
    i = 0;
    while (i < strlen(s1))
    {
        str[i] = s1[i];
        i++;
    }
    printf("i: %d\n", i);
    j = 0;
    while (j < strlen(s2))
    {
        str[i] = s2[j];
        j++;
        i++;
    }
    str[i] = 0;
    printf("i se: %d\n", j);
    return (str);
}
int main(void)
{
    printf("lstring es de: %s", ft_strjoin("Pta", "Pataa"));
    return (0);
}