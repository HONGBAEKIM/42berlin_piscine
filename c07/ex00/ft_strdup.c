#include <stdlib.h>
#include <stdio.h>

 char *ft_strdup(char *src)
 {
    int i;
    int size;
    char *dest;

    size = 0;
    while (src[size])
        size++;
    size--;
    if(!(dest = malloc(sizeof(char) * size)))
        return (0);
    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
 }

 int    main()
 {
    printf("%s" ,ft_strdup("what is this"));
 }