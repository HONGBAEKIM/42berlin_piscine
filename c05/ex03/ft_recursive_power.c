 #include <stdio.h>
 
 int ft_recursive_power(int nb, int power)
 {
    if (power < 0)
        return (0);
    else if (power == 0)
        return (1);
    else
        return(nb * ft_recursive_power(nb, power - 1));
 }
 
 int main()
 {
    printf("%d\n", ft_recursive_power(3, 0));
    printf("%d\n", ft_recursive_power(3, 1));
    printf("%d\n", ft_recursive_power(3, 2));
    printf("%d\n", ft_recursive_power(3, 3));
    printf("%d\n", ft_recursive_power(3, 4));
 }