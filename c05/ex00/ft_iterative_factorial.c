 #include <stdio.h>

 int ft_iterative_factorial(int nb)
 {
    int i;

    if (nb < 0)
        return (0);
    else if (nb == 0 || nb == 1)
        return (1);
    i = 1;
    while (nb > 1)
    {
        i = i * nb;
        nb--;
    }
    return (i);
 }

 int main()
 {
    printf("%d\n", ft_iterative_factorial(0));
    printf("%d\n", ft_iterative_factorial(1));
    printf("%d\n", ft_iterative_factorial(2));
    printf("%d\n", ft_iterative_factorial(3));
    printf("%d\n", ft_iterative_factorial(4));
    printf("%d\n", ft_iterative_factorial(5));
    printf("%d\n", ft_iterative_factorial(6));
    printf("%d\n", ft_iterative_factorial(7));
    printf("%d\n", ft_iterative_factorial(8));
    printf("%d\n", ft_iterative_factorial(9));
    printf("%d\n", ft_iterative_factorial(10));
 }