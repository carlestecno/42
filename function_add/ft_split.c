#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t ft_count(char *str, char c)
{
	size_t count;
	int flag;

	count = 0;
	flag = 0;
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

int main()
{
	char *str= "   a   b c a   bc a b ";
	printf("%lu", ft_count(str, ' '));
}
	