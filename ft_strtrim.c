#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t  ft_strlen(const char *str)
{
	char *ptr;

	ptr = (char *)str;
    while (*str)
    {
        str++;
    }
    return (str - ptr);
}

char    *ft_strchr(const char *s, int c)
{
        while (*s)
        {
            if (*s == c)
            {
            	return ((char *)s); 	
            } 
            s++;
        }
        return (NULL);
}	

// int main(void)
// { 
// 	char *s1 = "abcjdajjriacb";
// 	char *set = "acdrib";
// 	int i;
// 	size_t z;
	
	
// 	z = ft_strlen(s1);
// 	printf("z----------inicial:%i\n", z);
// 	i = 0;
//     while (ft_strchr(set, s1[i]))
//     { 	
// //    	printf("ft_strchr: %s\n", ft_strchr(set,s1[i]));
//     	s1++;
//     	printf("i_final:%i\n",i);	
// 	}
// 	printf("diferencia entre punters inicial: %i\n", z - i-1);
// 	while(ft_strchr(set, s1[z-1] ))
// 	 { 	
// 	 	printf("z: %i\n", z);
// //    	printf("ft_strchr: %s\n", ft_strchr(set,s1[z-1]));
//     	z--;
// //    	printf("i++:%i\n",i);
// 		printf("z_final: %i\n", z);	
// 	}
// 	printf("diferencia entre punters final: %i\n", z-i);
// 	printf("El valor de lstring es de: %s", s1);
// }                                         