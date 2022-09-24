#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{	
	char	*str;
	
	str = (char*)s;
	while (*str &&  n > 0)
	{
		*str = c;
		str++;
		n--;
	}
	return (s);
}