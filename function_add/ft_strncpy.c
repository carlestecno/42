#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, const char *src, size_t n)
{
    char *ptr;

    ptr = dest;
    while (n--)
    {
        *ptr++ = *src++;
    }
    *ptr = 0;
    return (dest);
}

int main(void)
{
    char str[] = "Patata de foigras";
    char dest[20];

    printf("string dest: %s", ft_strncpy(dest, str, 2));

}