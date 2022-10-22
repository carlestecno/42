#include <stdio.h>


void ft_myfunction(char **ptr)
{
    printf("ptr: %s", ptr);
}

int main()
{
    char *str= "Patata";
    char **ptr;
 
    ptr = &str;
    // while (**ptr)
    // {
    //     printf("ptr:%c", ptr);
    // }
    printf("direccio str[0]: %u\n", str);
    printf("direccio str: %u\n", &str[2]);
    printf("direccio ptr: %u\n", *ptr);
    printf("caracter de ptr[]: %c\n", (*ptr)[1]);
    ft_myfunction(ptr);
}