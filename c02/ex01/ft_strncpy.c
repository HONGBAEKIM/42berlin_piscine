#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}

int main()
{
    char dest[] = "abcd";
    char src[] = "efgh";

    ft_strncpy(dest, src, 1);
    printf("%s\n", dest);
    printf("%s\n", src);
}