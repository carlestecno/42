#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *s)
{
    int i = 0;
    while (s[i])
    {
        i++;  
    }
    return (i);
}

char *my_evil_str(char *str)
{
    int size = ft_strlen(str);
    int i = 0;
    char temp;
    
    while (i < size )
    {
       temp = str[i];
       str[i] = str[size-1];
       str[size-1] = temp;
       size--;
       i++;
    }

    i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
    return (str);
}

int main()
{
	char s1[] = "12345";
	my_evil_str(s1);
}