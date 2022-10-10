#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int	r;
	int	c;
	int i;
	char **ptr;
	
	r = 4;
	c = 4;
	ptr = (char **)malloc(c);
	i = 0;
	while (i < 4)
	{
		ptr[i] = (char *)malloc(c);
		bzero(ptr[i],c);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		strcpy(ptr[i], "Hi");
		i++;
	}
	i = 0;
	while (i < 4)
	{
		printf("%s", ptr[i]);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
	return (0);
}