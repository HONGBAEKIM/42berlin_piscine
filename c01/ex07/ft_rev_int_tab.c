#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int i;
    int tmp;

    i = 0;
    size--;
    while (i < size)
    {
        tmp = tab[i];
        tab[i] = tab[size];
        tab[size] = tmp;
        size--;
        i++;
    }
}

int main()
{
    int tab[5] = {0, 1, 2, 3, 4};

    ft_rev_int_tab(tab, 5);
    printf("%d", tab[0]);
}