#include "libft.h"
#include <string.h>
#include <stdio.h>

char    *ft_strrchr(const char *s, int c)
{   
    char *str;
    
    str = (char *)s;
    while (*str)
        str++;
    if (c == 0)
        return ((char *)str);
    str--;
    while(str >= s)
    {
        if (*str == (char)c)
            return((char *)str);
        str--;
    }
    return (NULL);
}

//  int main()
//  {
//      char    *str1;
//      char	*str2;
     
//      str1 = ft_strrchr("Patata", 'a');
//      str2 = strrchr("Patata", 'a');
    
//      printf("lstring es de: %s\n", str1);
//      printf("lstring es de: %s\n", str2); 
//      return (0);
//  }