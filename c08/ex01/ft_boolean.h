#ifndef FT_BOOLEAN.H
#define FT_BOOLEAN.H

#include <unistd.h>

#define EVEN_MSG    "I I have an even number of arguments.\n"
#define ODD_MSG    "I I have an odd number of arguments.\n"
#define EVEN(x)     x % 2 == 0
#define SUCCESS     0
#define TRUE        1
#define FALUE       0

typedef int     t_bool;

#endif

/*
include "ft_boolean.h"

void    ft_putstr(char *str) 
{
    while (*str)
        write(1, str++, 1);
}
t_bool  ft_is_even(int nbr) 
{
    return ((EVEN(nbr)) ? TRUE : FALSE);
}
int main(int argc, char **argv)
{
    (void)argv;
    if (ft_is_even(argc - 1) == TRUE)
        ft_putstr(EVEN_MSG);
    else
        ft_putstr(ODD_MSG);
    return (SUCCESS);    
}*/