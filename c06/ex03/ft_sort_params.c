#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        write(1, &str[i++], 1);
}

int main(int ac, char **av)
{
    int i;
    int j;
    char *tmp;

    if (ac > 1)
    {
        i = 1;
        while (i < ac)
        {
            j = 1;
            while (j < ac)
            {
                if (ft_strcmp(av[i], av[j]) < 0)
                {
                    tmp = av[i];
                    av[i] = av[j];
                    av[j] = tmp;
                }
                j++;
            }
            i++;
        }
        i = 1;
        while (i < ac)
        {
            ft_putstr(av[i]);
            ft_putstr("\n");
            i++;
        }
    }
    return (0);
}