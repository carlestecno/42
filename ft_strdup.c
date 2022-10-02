#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str);

char	*ft_strdup(const char *s)
{
    char	*str;
    size_t		i;
    
    str = (char *)malloc(strlen(s));
    if (!str)
    {
    	printf("No hi ha malloc");
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