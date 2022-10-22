#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_lenint(int n, int count)
{
    count++;
    if (n < 0)
    {
        n *= -1;
        count++;
    }
    if (n > 9)
    {
        ft_lenint(n/10, count);
    }
    else
    {
        printf("count: %i\n", ++count);
        return (count);
    }
}

int ft_exponent(int n)
{
    if (n <=1)
        return (1);
    else 
        return (10 * ft_exponent(n - 1));
}

char *ft_itoa(int n)
{
    int count;
    char *ptr;
    char *ptrptr;
    int discount;
  
    count = 0;
    discount = ft_lenint(n , count);
    printf("nombre de caracters: %i\n", discount);
    ptr = (char *)malloc(ft_lenint(n, count) * sizeof(char));
    ptrptr = ptr;
    printf("direccio ptr inicial: %u\n", ptr);
    if (!ptr)
    {
        return (NULL);  
    }
    if (n < 0)
    {
        *ptr++ = '-';  
        n *= -1;      
        discount--;
    }
    while (discount--)
    {
        printf("value of ft_discount: %i\n", ft_exponent(discount));
        *ptr =  (n / ft_exponent(discount))+48;
        printf("valor ptr: %c\n", *ptr);
        if (n % ft_exponent(discount) != 0)
        {
            n = n % ft_exponent(discount);
        }
        n = n / ft_exponent(discount);
        printf("nou valor de n: %i\n", n);
        *ptr++;
    }
    *ptrptr = 0;
    printf("El valor de string es de: %c\n", *ptr);
    

}

int main(void)
{
    printf("string :%s", ft_itoa(100));
}