#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_stock_str 
{
    int size; 
    char *str; 
    char *copy;
}               t_stock_str;

void   ft_show_tab(struct s_stock_str *par);
struct s_stock_str *ft_strs_to_tab(int ac, char **av);

#endif

int    ft_strlen(char *str)
 {
    int i;
    
    i = 0;
    while (str[i])
        i++;
    return (i);
 }

 char   *ft_strdup(char *src)
 {
    char *dest;
    int i;
    int size;

    size = 0;
    while (src[size])
        size++;
    if (!(dest = malloc(sizeof(char) * (size + 1))))
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

 struct s_stock_str *ft_strs_to_tab(int ac, char **av)
 {
    t_stock_str *tab;
    int i;

    if (!(tab = malloc(sizeof(t_stock_str) * (ac + 1))))
        return (0);
    i = 0;
    while (i < ac && av[i] != '\0')
    {
        tab[i].size = ft_strlen(av[i]);
        tab[i].str = av[i];
        tab[i].copy = ft_strdup(av[i]);
        i++;
    }
    tab[i].str = 0;
    return (tab);
 }

 void   ft_putchar(char c)
 {
    write(1, &c, 1);
 }

 void   ft_putstr(char *str)
 {
    int i;

    i = 0;
    while (str[i])
    {
        ft_putchar(str[i++]);
    }
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
        ft_putnbr(par[i].size);
        ft_putchar('\n');
        ft_putstr(par[i].copy);
        ft_putchar('\n');
        i++;
    }
 }

 int    main(int ac, char **av)
 {
    ft_show_tab(ft_strs_to_tab(ac, av));
    return (0);
 }



