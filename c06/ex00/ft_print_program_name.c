#include <unistd.h>

int main(int ac, char **av)
{
    int i;

    i = 0;
    if (ac == 1)
    {
        while (av[0][i] != '\0')
            write(1, &av[0][i++], 1);
    }
    return (0);
}