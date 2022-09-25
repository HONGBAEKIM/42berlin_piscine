#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void   ft_putnbr(int nb)
{
    if (nb < 0)
    {
        nb = -nb;
        ft_putchar('-');
    }
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    if (nb < 10)
        ft_putchar(nb + '0');
}

int main(void)
{
    ft_putnbr(42);
    ft_putnbr(-42);
    ft_putnbr(0);
}