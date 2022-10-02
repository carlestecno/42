//#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

size_t  ft_strlen(const char *str);

char    *ft_strdup(const char *s)
{
    char	*str;
    long		i;
    
    str = (char *)malloc(strlen(s));
    if (!str)
    {
    	printf("No hi ha malloc");
    	return (-1);
    }
    i = 0;
    while (s[i])
    {
        str[i] = s[i];
        i++;
    }
    str[i] = 0;
    return (str);
}
int main()
{
    printf("El valor s es: %s\n", strdup("abcs"));
    printf("El valor s es: %s", ft_strdup("abcs"));
}