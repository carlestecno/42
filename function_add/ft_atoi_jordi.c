
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *ft_rev_str(int n)

{

                char *ptr;

                if (n < 0)

                {

                               ptr[0] = '-';

                               ptr++;

                }

                if (n > 9)

                {

                               ft_rev_str(n/10);

                               *ptr = n%10 + '0';

                               ptr++;

                }

                return (ptr);

}

 

char *my_evil_str(char *str, int len)

{

    int i = 0;

    char temp;
    int size;

    size = strlen(str);
    printf("size: %i", size);

   

    while (i < len)

    {

       temp = str[i];

       str[i] = str[size-1];

       str[size-1] = temp;

       size--;

       i++;

    }

    return (str);

}

 

 

char       *ft_itoa(int n)

{

                char *str1;

                int len;

                char *ptr;

 

                str1 = ft_rev_str(n);

                len = strlen(str1);

 

                ptr = (char*)malloc(len * sizeof(char));

 

                ptr = my_evil_str(str1, len);

                return(ptr);

}

 

int main()
{
    printf("a: %s", ft_itoa(125));
}

 
	
