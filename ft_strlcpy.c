//#include "libft.h"
#include <string.h>
#include <stdio.h>
//#include <bsd/string.h>



/* size_t strlcpy(char *dst, const char *src, size_t size)
{

} */

int main()
{
    char    str[] = "Patata de llangonissa";
    char    dest[50];
    size_t strdef;
  /*   ft_strlcpy(dest, str, 1*sizeof(int));
    printf("Lstring0 es de: %s\n", dest); */

    strdef = 	strlcpy(dest, str, sizeof(int));
    printf("Lstring1 es de: %s\n", strdef);
    return (0);
}