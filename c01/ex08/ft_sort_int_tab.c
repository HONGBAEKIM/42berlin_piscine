#include <stdio.h>

void   ft_sort_int_tab(int *tab, int size)
{
    int i;
    int tmp;

    i = -1;
    size--;
    while (size > ++i)
    {
        if (tab[i] > tab[i + 1])
        {
            tmp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = tmp;
            i = -1;
        }
    }
}

int main()
{
    int tab[] = {9, 5, 8, 3, 1};
    
    ft_sort_int_tab(tab, 5);
    printf("%d\n", tab[0]);
    printf("%d\n", tab[1]);
    printf("%d\n", tab[2]);
    printf("%d\n", tab[3]);
    printf("%d\n", tab[4]);
}