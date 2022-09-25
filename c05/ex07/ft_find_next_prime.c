 #include <stdio.h>
 
 int ft_prime(int nb)
 {
    int i;

    i = 2;
    if (nb <= 1)
        return (0);
    while (nb > i)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
 }

 int ft_find_next_prime(int nb)
 {
    int i;

    if (nb < 2)
        nb = 2;
    i = nb;
    while (i < 2 * nb)
    {
        if (ft_prime(i) == 1)
            return (i);
        i++;    
    }
    return (0);
 }

 int main()
 {
    printf("%d\n", ft_find_next_prime(0));
    printf("%d\n", ft_find_next_prime(1));
    printf("%d\n", ft_find_next_prime(2));
    printf("%d\n", ft_find_next_prime(3));
    printf("%d\n", ft_find_next_prime(4));
    printf("%d\n", ft_find_next_prime(5));
    printf("%d\n", ft_find_next_prime(6));
    printf("%d\n", ft_find_next_prime(7));
    printf("%d\n", ft_find_next_prime(8));
    printf("%d\n", ft_find_next_prime(9));
    printf("%d\n", ft_find_next_prime(10));
 } 