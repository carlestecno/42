#include "libft.h"
#include <string.h>
#include <stdio.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
	char 			*ptr;
	unsigned char	p;
	
	ptr = (char *)s;
    while (n--)
	{
		p = *ptr;
		if (p == (unsigned char)c)
		{
			return (ptr);
		}
		ptr++;
	}
	return (0);
}