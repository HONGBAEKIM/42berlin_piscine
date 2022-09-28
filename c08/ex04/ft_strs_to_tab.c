 #include <stdio.h>
 #include <stdlib.h>

 int    ft_strlen(char *str)
 {
    int i;
    
    i = 0;
    while (str[i])
        i++;
    return (i);
 }

 char   *ft_strdup(char *src)
 {
    char *dest;
    int i;
    int size;

    size = 0;
    while (src[size])
        size++;
    size--;
    if (!(dest = malloc(sizeof(char) * size)))
        return (0);
    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
 }

 struct s_stock_str *ft_strs_to_tab(int ac, char **av)
 {

 }


/*
Create a function that takes an array of string as argument and the size of this array.

It will transform each element of av into a structure.

The structure will be defined in the ft_stock_str.h file that we will provided, like
this:

typedef struct s_stock_str 
{
    int size; 
    char *str; 
    char *copy;
} t_stock_str;


◦ size being the length of the string; 
◦ str being the string;
◦ copy being a copy of the string;

It should keep the order of av.

The returned array should allocated in memory 
and its last element’s str set to 0, 
this will mark the end of the array.
It should return a NULL pointer if an error occurs.
We’ll test your function with our ft_show_tab (next exercise). 
Make it work ac- cording to this !*/