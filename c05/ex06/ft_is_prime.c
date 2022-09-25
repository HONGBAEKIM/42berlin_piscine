 #include <stdio.h>
 
 int ft_is_prime(int nb)
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

 int main()
 {
    printf("%d\n", ft_is_prime(0));
    printf("%d\n", ft_is_prime(1));
    printf("%d\n", ft_is_prime(2));
    printf("%d\n", ft_is_prime(3));
    printf("%d\n", ft_is_prime(4));
    printf("%d\n", ft_is_prime(5));
    printf("%d\n", ft_is_prime(6));
    printf("%d\n", ft_is_prime(7));
    printf("%d\n", ft_is_prime(8));
    printf("%d\n", ft_is_prime(9));
    printf("%d\n", ft_is_prime(10));
 } 