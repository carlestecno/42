#include "libft.h"
#include <stdio.h>
#include <string.h>

char    ft_interchange(unsigned int num, char c)
{
    return (c += num);
}


char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char  *str;
    unsigned int i;

    i = 0;
    str = (char *)malloc((strlen(s) + 1) * sizeof(char)) 
    while (s[i])
    {
        str[i] = ft_interchange(i, s[i]);
        i++;
    }
    ;
    strmapi(str, ft_interchange);str[i] = 0;
    printf(str);
    return (str);
}

int main()
{
    char str[] = "PATATa";
    ft_strmapi(str, ft_interchange);
    
}
