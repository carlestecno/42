#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char *str= "abc abc ab";
	char *ptr1;
	char *ptr2;
	char **ptr;
	int 		i;
	
	i = 0;
	ptr = (char**)malloc(3 *sizeof(char));
	ptr1 = str;
	ptr2 = str;
	while (ptr1 = strchr(ptr1, ' '))
	{
		printf("len bucle:%d\n", ptr1-ptr2);
		ptr[i] = (char*)malloc(ptr1-ptr2);
		ft_memset(ptr[i], ptr2, ptr2 - ptr1);
		printf("ptr: %s\n", ptr[i]);
		ptr1++;
		ptr2 = ptr1;
	}
	printf("string_final_es: %s\n", ptr2);
	printf("string len:%i", strlen(ptr2));
}