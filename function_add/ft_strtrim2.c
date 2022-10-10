#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int check_set(char c, char const *set)
// {
//     int i;
//     i = 0;
//     while (set[i])
//     {
//         if (set[i] == c)
//             return 1;
//         i++;
//     }

//     return 0;
// }

char *ft_strtrim(char const *s1, char const *set)
{
    char c;
    int i;
    char *new_str;
    int count;
    char *final_str;
    int j;
    int a;
    // int lent;
    // lent = strlen(s1);
    i = 0;
    while (i < strlen(s1))
    {
        c = s1[i];
        // if (check_set(c, set) == 1)
        if (strchr(set, c))
            i++;
        else
            break;
    }
    j = i;
    i = strlen(s1) - 1;
    while (i > 0)
    {
        c = s1[i];
        // if (check_set(c, set) == 1)
        if (strchr(set, c))
            i--;
        else
            break;
    }
    a = strlen(s1) - (strlen(s1) - i - 1) - j;
    // final_str = strlcat(new_str, s1[j], a);
    // printf("new_str: %s\n", final_str);
    // final_str = strdup(new_str);
    // printf("strdup %s\n", final_str);
    new_str = (char *)malloc(a * sizeof(char));
    i = 0;
    count = j + a;
    while (j < count)
    {
        new_str[i] = s1[j];
        i++;
        j++;
    }
    new_str[i] = 0;
    return (new_str);
    // return (final_str);
}

int main()

{

    char *a = "          abcdep oty        ";

    char *b = "          ";

    char *final;

    int len;

    final = ft_strtrim(a, b);

    printf("%s\n", final);

    len = strlen(final);

    printf("%i", len);
}