#include <stdio.h>
#include <stdlib.h>

 int *ft_range(int min, int max)
 {
    int *tab;
    int i;

    if (min >= max)
        return (0);
    if (!(tab = malloc(sizeof(int) * (max - min))))
        return (0);
    i = 0;
    while (min < max)
    {
        tab[i] = min;
        i++;
        min++;
    }
    return (tab);
 }

 int    main()
 {
    int *tab;
    int i;

    tab = ft_range(5, 9);
    i = 0;
    while (tab[i])
    {
        printf("%d", tab[i]);
        i++;
    }
}