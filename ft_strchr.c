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
            printf("*s:%i\n", s);
            s++;
        }
        printf("direccio final:%i\n", s);
        return (s);  
}

int main(void)
{
    printf("meu : %i\n", ft_strchr("Patata", ' '));
    printf("func original: %s\n", strchr("Patata", ' '));
    return (0);
}