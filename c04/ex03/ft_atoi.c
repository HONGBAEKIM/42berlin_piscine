 #include <stdio.h>

 int ft_atoi(char *str)
 {
    int neg;
    int i;
    int val;

    neg = -1;
    i = 0;
    val = 0;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            neg = neg * (-1);
        i++;
    }
    while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {
        val = val * 10 + str[i] - '0';
        i++;
    }
    return (val * neg);
 }

 int main()
 {
    char    a[] = "   ---+--+1234ab567";

    printf("%d", ft_atoi(a));
 }