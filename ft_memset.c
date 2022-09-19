#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;	
	char	*str;
	
	str = (char*)s;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}


/* int main()
{
    char str[] = "GeeksForGeeks";
    
    printf("size of %d\n", sizeof(str));
    ft_memset(str + 2, '.', 1*sizeof(char));
    printf("After memset_1():  %s\n", str);
    memset(str + 3, '.', 1*sizeof(char));
    printf("After memset_2():  %s\n", str);
    return 0;
} */

