#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

void    *ft_calloc(size_t nmemb, size_t size)
{
    int *ptr;

    ptr = malloc(size * sizeof(int));
	if (!ptr)
	{
    	return (NULL);
	}
    while (size--)
    {
        *ptr++ = 0;  
    }
    return (ptr - nmemb) ;
}

int main(void)
{
	int *i;
	int	*d;
	
	i = calloc(6,4);
	d = ft_calloc(6,4);
	printf("El valor calloc es de: %d\n", i);
	printf("El valor ft_calloc es de: %d\n", d);
	i += 6;
	d += 6;
	printf("El valor calloc es de: %d\n", i);
	printf("El valor ft_calloc es de: %d\n", d);
	free(i);
	free(d);
    return (0);
}