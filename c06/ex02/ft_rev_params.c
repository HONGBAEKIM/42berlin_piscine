#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int j;

    if (ac > 1)
    {
        j = ac - 1;
        while (j >= 1)
        {
            i = 0;
            while (av[j][i] != '\0')
                write(1, &av[j][i++], 1);
            write(1, "\n", 1);
            j--;
        }
    }
    return (0);
}