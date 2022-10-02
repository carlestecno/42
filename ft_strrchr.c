//#include "libft.h"
#include <string.h>
#include <stdio.h>

char    *ft_strrchr(const char *s, int c)
{   
    while (*s)
    {
        s++;
    }
    s--;
    while(*s)
    {
        if (*s == c)
        {
            return((char *)s);
        }
		s--;    
    }
    return (0);
}

 int main()
 {
     char    *str1;
     char	*str2;
     
     str1 = ft_strrchr("Patata", 'a');
     str2 = strrchr("Patata", 'a');
    
     printf("lstring es de: %s\n", str1);
     printf("lstring es de: %s\n", str2); 
     return (0);
 }