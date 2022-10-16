#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t  ft_strlen(const char *str);

size_t ft_strlcpy(char *dst, const char *src, size_t size)  
{
  size_t i;

  i = ft_strlen(src);
  size--;
  while (size-- && (*src))
  {
      *dst++ = *src++;
  }
  *dst = 0;
  return (i);
}

// int main(void)
// {
//   int i;
//   char  *src = "Patata";
//   char  dest[50];

//   printf("El valor int de: %d i str: %s", strlcpy(dest, src, 2), dst);
//   return (0);
// }