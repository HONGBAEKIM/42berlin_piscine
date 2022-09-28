 #include <stdio.h>
 #include <stdlib.h>

 int ft_ultimate_range(int **range, int min, int max)
 {
    int i;
    int len;

    len = max - min;
    if (min >= max)
    {
        *range = 0;
        return (0);
    }
    if (!(*range = malloc(sizeof(int) * len)))
        return (-1);
    i = 0;
    while (min < max)
    {
        (*range)[i] = min;
        i++;
        min++;
    }
    return (len);
 }

 int    main()
 {
    int i;
    int *range;

    i = 0;
    ft_ultimate_range(&range , -5, 5);
    while (i < 5)
    {
        printf("%d\n", range[i]);
        i++;
    }
 }