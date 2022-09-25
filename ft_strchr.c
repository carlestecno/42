/* #include "libft.h" */
#include <string.h>
#include <stdio.h>

char    *ft_strchr(const char *s, int c)
{
        while (*s)
        {
            if (*s == c)
            {
            	break; 
            } 
            s++;
        }
        return ((char*)s);
}

 int main()
 {
     char    *str;
     str = ft_strchr("Patata", 'a');
     /* str = strchr("Patata", 'p'); */
    
     printf("lstring es de: %s\n", str);
     str = ft_strchr("Patata", 'a');
     printf("lstring es de: %s\n", str); 
     return (0);
 }