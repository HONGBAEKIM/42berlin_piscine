#include <stdio.h>
#include <string.h>

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (src[i] && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < size)
    {
        dest[i] = '\0';
        i++;
    }
    return (0);
}

int main()
{
    char    dest[] = "abcd";
    char    src[] = "efgh";

    strlcpy(dest, src, 3);
    printf("%s\n", dest);
    printf("%s\n", src);
    ft_strlcpy(dest, src, 3);
    printf("%s\n", dest);
    printf("%s\n", src);    
}