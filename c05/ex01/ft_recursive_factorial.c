 #include <stdio.h>

 int ft_recursive_factorial(int nb)
 {
    if (nb < 0)
        return (0);
    else if (nb == 0 || nb == 1)
        return (1);
    else
        return(nb * ft_recursive_factorial(nb - 1));
 }

 int main()
 {
    printf("%d\n", ft_recursive_factorial(0));
    printf("%d\n", ft_recursive_factorial(1));
    printf("%d\n", ft_recursive_factorial(2));
    printf("%d\n", ft_recursive_factorial(3));
    printf("%d\n", ft_recursive_factorial(4));
    printf("%d\n", ft_recursive_factorial(5));
    printf("%d\n", ft_recursive_factorial(6));
    printf("%d\n", ft_recursive_factorial(7));
    printf("%d\n", ft_recursive_factorial(8));
    printf("%d\n", ft_recursive_factorial(9));
    printf("%d\n", ft_recursive_factorial(10));
 }