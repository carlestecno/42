#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ft_split(char const *str, char c)
{
	char *d;
	
	d = strchr(str, c);
	printf("c: %s", d);

}
int main()
{
	ft_split("abdabd", 'd');
}
