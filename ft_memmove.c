/* #include "libft.h" */
#include <string.h>
#include <stdio.h>

/* void    *ft_memmove(void *dest, const void *src, size_t n)
{
    char *str;
    char *str1;

    str1 = (char *)dest;
    str = (char *)src;
    while (n--)
    {
        *str1++ = *str++;
    }    
    return (str1);
} */

int main()
{
    char    *str= "1234 6789 abcd fghi";

    
    /* ft_memmove(str + 5, str, 10*sizeof(char));
    printf("Lstring0 es de: %s\n", str); */
    memmove(str + 5, str, 3*sizeof(int));
    printf("Lstring1 es de: %s\n", str);
    return (0);
}