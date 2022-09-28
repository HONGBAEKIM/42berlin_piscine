 
 #include <stdlib.h>
 //#include "ft_stock_str_h"

 void   ft_putchar(char c)
 {
    write(1, &c, 1);
 }

 void   ft_putstr(char *str)
 {
    int i;

    i = 0;
    while (str[i])
        write(1, &str[i++], 1);
 }

 void   ft_putnbr(int nb)
 {
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    if (nb < 10)
        ft_putchar(nb + '0');
 }

 void   ft_show_tab(struct s_stock_str *par)
 {
    int i;

    i = 0;
    while (par[i].str)
    {
        ft_putstr(par[i].str);
        ft_putchar('\n');
        ft_putstr(par[i].size);
        ft_putchar('\n');
        ft_putstr(par[i].copy);
        ft_putchar('\n');
        i++;
    }
 }
/*
 int    main(int ac, char **av)
 {
    ft_show_tab(ft_strs_to_tab(ac, av));
    return (0);
 }*/