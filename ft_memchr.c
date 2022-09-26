#include "libft.h"
#include <string.h>
#include <stdio.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
	char *ptr;
	
	ptr = s;
    while (n--)
	{
		if (*ptr == c)
		{
			return (ptr);
		}
		ptr++;
	}
	return (0);
}