#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
char *ft_strncpy(char *dest, const char *src, size_t n)//torna un size de més
	    {
	        size_t i;
	        
	        i = 0;
	        while (n--)
	        {
	            dest[i] = src[i];
                printf("direccio dest parcial: %u\n", &dest[i]);
	            i++;
	        }
	        dest[i]= '\0';
            printf("desti final: %u\n", &dest[i]);
	        return (dest);
	    }
	
// void    *ft_memcpy(void *dst, const void *src, size_t n)
// {
//     char *str;
//     char *str1;

//     str1 = dst;
//     str = (char*)src;
//     while (n--)
//     {
//         *str1 = *str;
//         str1++;
//         str++;
//     }   
//     *str1 = '\0';
//     return (dst);
// }


char    *ft_strchr_meu(const char *s, int c)
{
        while (*s)
        {
            if (*s == c)
            {
            	break; 
            } 
            s++;
        }
        return ((char *)s);  
}

size_t  ft_countwords(const char *str, char c)
{
    size_t  count;
    int flag;

    flag = 0;
    count = 0;
    while (*str)
    {
        if (*str == c)
        {
            flag = 0;    
        }
        else if(*str != c && flag == 0)
        {
            flag = 1;
            count++;
        }
        str++;
    }
    return (count);
}

void **ft_split(char const *s, char c)
{
    int j;
    const char *ps;
    char **ptr;

    ps = s;
    j = 0;
	ptr = (char **)malloc(ft_countwords(s,c) * sizeof(char *));
    if (!ptr)
    {
        return (NULL);
    }
    while (*ps)
    {
        if (*ps != c)
        {
            s = ps;
            ps = ft_strchr_meu(s, c);
            ptr[j] = (char *)malloc(ps-s+1);
            ft_strncpy(ptr[j], s, ps-s);
            j++;
        }
        ps++;
    }
}

int main()
{
    printf("sizeofint:%i\n", sizeof(double));
	ft_split("abc cdd bab baba  za  z a ", ' ');
}