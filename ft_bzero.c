#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

void	*ft_memset(void *s, int c, size_t n);

void    ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}