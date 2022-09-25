#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    print(int *range, int n)
{
    int i;
    int display;

    i = 0;
    display = 1;
    while (++i < n)
    {
        if (range[i - 1] >= range[i])
            display = 0;
    }
    if (display == 0)
        return ;
    i = -1;
    while (++i < n)
        ft_putchar(range[i] + '0');
    if (range[0] < (10 - n))
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
    
}

void    ft_print_combn(int n)
{
    int i;
    int range[10];

    if (n < 0 || n > 10)
        return ;
    i = -1;
    while (++i < n)
        range[i] = i;
    while (range[0] <= (10 - n))
    {
        print(range, n);
        range[n - 1]++;
        i = n;
        while(i > 0)
        {
            i--;
            if (range[i] > 9)
            {
                range[i - 1]++;
                range[i] = 0;
            }
        }
    }
}

int main(void)
{
    ft_print_combn(3);
}