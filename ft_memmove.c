/* #include "libft.h" */
#include <string.h>
#include <stdio.h>

void    *ft_memmove(void *restrict dest, const void *restrict src, size_t n)
{
    char *str_dest;
    char *str_source;
    char *str_newdest;
    char  temp;

    str_dest = (char *)dest;
    str_source = (char *)src;
    str_newdest = str_dest + (str_dest - str_source);
    printf("la cadena de newdest: %c\n", *str_newdest);
    printf("diferencia de (dest - source):%d\n", str_dest - str_source);
    while (n--)
    {
      printf("str_dest abans: %c\n", *str_dest);
      *str_dest = *str_source;
      str_dest++;
      str_source++;
      *str_newdest = *str_dest;
      printf("str_dest despres: %c\n", *str_dest);
      temp  = *str_dest++;
      printf("valor del temp:%c\n", temp);
      *str_newdest++ = *str_dest++;
      *(str_dest)++ = temp;
      
      printf("valor del str_newdest:%c\n", *str_newdest);
    }
    return (str_dest);
}


int main()
{
    char    str[] = "0123456789abcdfghikl";
    // char    dest[50]  ="Patata de Patata";
    
    ft_memmove(str + 5 , str  , 6* sizeof(char));
    printf("Lstring0 es de: %s\n", str);
}