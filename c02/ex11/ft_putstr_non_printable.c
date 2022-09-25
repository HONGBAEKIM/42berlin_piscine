 #include <unistd.h>
 #include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_hexa(int c, int err)
{
	char	*base;

	base = "0123456789abcdef";
	if (c <= 0 && err == 0)
	{
		c += 256;
	}
	if (c >= 16)
	{
		ft_put_hexa(c / 16, 1);
		ft_put_hexa(c % 16, 1);
	}
	else
	{
		if (err == 0)
			ft_putchar('0');
		ft_putchar(base[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			j = str[i];
			ft_put_hexa(j, 0);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}


int main(void)
{
    char a[] = "Coucou\ntu vas bien";
    char b[] = "omellett\e du fromage";
    char c[] = "coeuf@ca\6vae fef";
    char d[] = "Batata x7 rfg";
    char e[] = "roquefort`[\e{forte-e_tem,bolor feff";
    char f[] = "we 9are 78\familly x1F rgfenf";

    ft_putstr_non_printable(a);
    printf("\n");
    ft_putstr_non_printable(b);
    printf("\n");
    ft_putstr_non_printable(c);
    printf("\n");
    ft_putstr_non_printable(d);
    printf("\n");
    ft_putstr_non_printable(e);
    printf("\n");
    ft_putstr_non_printable(f);
    printf("\n");
}