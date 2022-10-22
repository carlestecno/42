#include <stdio.h>
#include <string.h>

int main()
{
    char *str= "a  b  a";
    char *ptr;
    char c;

    ptr = str;
    c = ' ';
    while (ptr = strchr(str, c))
    {
        printf("str:%c\n", *ptr);
        while(*ptr == c)
        {
            ptr++;
        }
    }
}