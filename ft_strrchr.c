#include "libft.h"
#include <string.h>
#include <stdio.h>

int ft_strlen(char *str);



char    *ft_strrchr(const char *s, int c)
{       
    int i;
    char    *str;

    str = (char*)s;
    i = ft_strlen(str);
    printf("El valor de i: %d", i);
    while (i >=0)
    {
        if (str[i] == c)
        {
            break; 
        } 
        i--;
    }
    return ((char*)s);
}

 int main()
 {
     char    *str;
     
     str = ft_strrchr("Patata", 'a');
     /* str = strrchr("Patata", 'a'); */
    
     printf("lstring es de: %s\n", str);
     /* str = ft_strchr("Patata", 'c');
     printf("lstring es de: %s\n", str); */
     return (0);
 }