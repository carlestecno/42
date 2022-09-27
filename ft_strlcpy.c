//#include "libft.h"
#include <string.h>
#include <stdio.h>
//#include <bsd/string.h>



/* size_t strlcpy(char *dst, const char *src, size_t size)
{

} */
{
  unsigned int i;
  unsigned int j;
  
  i = 0;
  j = 0;
  while (src[j] != '\0')
  {
    j++;
  }
  while(src[i] != '\0')
  {
    if(i == size)
      break;
    dst[i] = src[i];
    i++;
  }
  while(dest[i] != '\0')
  {
    dst[i] = '\0';
    i++;
  }
  return (j);
}

int main()
{
    char    str[] = "Patata de llangonissa";
    char    dest[50];
    size_t strdef;
  /*   ft_strlcpy(dest, str, 1*sizeof(int));
    printf("Lstring0 es de: %s\n", dest); */

    strdef = 	strlcpy(dest, str, 8 * sizeof(int));
    printf("Lstring1 es de: %s\n", dest);
    return (0);
}