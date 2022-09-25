 #include <stdio.h>
 
 int ft_sqrt(int nb)
 {
    int i;

    i = 1;
    if (nb < 0)
        return (0);
    else if (nb == 0 || nb == 1)
        return (0);
    while (i < nb && nb <= 46340)
    {
        if (i * i == nb)
            return (i);
        i++;
    }
    return (0);
 }

int main()
 {
    printf("%d\n", ft_sqrt(0));
    printf("%d\n", ft_sqrt(1));
    printf("%d\n", ft_sqrt(2));
    printf("%d\n", ft_sqrt(3));
    printf("%d\n", ft_sqrt(4));
    printf("%d\n", ft_sqrt(5));
    printf("%d\n", ft_sqrt(6));
    printf("%d\n", ft_sqrt(7));
    printf("%d\n", ft_sqrt(8));
    printf("%d\n", ft_sqrt(9));
    printf("%d\n", ft_sqrt(10));
 } 