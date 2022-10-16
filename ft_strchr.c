#include "libft.h" 
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
        printf("El valor de: %s\n", (char *)s);
        return ((char *)s);
        
}

int main(void)
{
    printf("meu : %s\n", ft_strchr("Patata", ' '));
    printf("func original: %s\n", strchr("Patata", ' '));
    return (0);
}