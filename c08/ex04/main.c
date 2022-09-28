#include <stdio.h>
#include "ft_stock_str.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
void   ft_show_tab(struct s_stock_str *par);

int main(int ac, char **av)
{
    ft_show_tab(ft_strs_to_tab(ac, av));
    return(0);
}


/*
int	main(int argc, char *argv[])
{
	t_stock_str	*stock;
	
	if (argc > 1)
	{
		stock = ft_strs_to_tab(argc - 1, ++argv);
		while (stock->str)
		{
			printf("str: %s\n", stock->str);
			printf("copy: %s\n", stock->copy);
			printf("size: %d\n", stock->size);
			stock++;
			printf("\n");
		}
	}
	printf("\n");
	return (0);
}*/