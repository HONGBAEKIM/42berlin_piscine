 #include <stdio.h>
 
 char *ft_strcapitalize(char *str)
 {
    int i;

    i = 0;
    if (str[0] >= 'a' && str[0] <= 'z')
        str[i] -= 32;    
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if ((str[i - 1] <= 47) ||
            (str[i - 1] >= 58 && str[i - 1] <= 64) ||
            (str[i - 1] >= 91 && str[i - 1] <= 96) ||
            (str[i - 1] >= 123))
                str[i] -= 32;
        }
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            if ((str[i - 1] >= 'A' && str[i - 1] <= 'Z') ||
            (str[i - 1] >= 'a' && str[i - 1] <= 'z'))
                str[i] += 32;
        }
        i++;
    }
    return (str);
 }

 int main()
 {
    char    a[] = "salut, coMment tu vas ? 42mots quarante-deux; cinquante+et+un";

    ft_strcapitalize(a);
    printf("%s\n", a);
 }