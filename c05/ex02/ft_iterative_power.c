  #include <stdio.h>
  
  int ft_iterative_power(int nb, int power)
  {
    int i;

    if (power < 0)
        return (0);
    else if (power == 0)
        return (1);
    i = nb;
    while (power > 1)
    {
        nb = i * nb;
        power--;
    }
    return (nb);
  }

  int main()
 {
    printf("%d\n", ft_iterative_power(3, 0));
    printf("%d\n", ft_iterative_power(3, 1));
    printf("%d\n", ft_iterative_power(3, 2));
    printf("%d\n", ft_iterative_power(3, 3));
    printf("%d\n", ft_iterative_power(3, 4));
 }