 #include <stdio.h>
 #include <string.h>

 char *ft_strstr(char *str, char *to_find)
 {
    int i;
    int j;
    int len;

    len = 0;
    while (to_find[len])
     len++;
    if (len == 0)
        return (str);
    i = 0;
    while (str[i] != '\0')
    {
        j = 0;
        while (to_find[j] == str[i + j])
        {
            if (j + 1 == len)
                return (&str[i]);
            j++;
        }
        i++;
    }
    return (0);
 }

int main()
 {
    char i[] = "defg";
    char j[] = "f";

    printf("%s\n", ft_strstr(i, j));

 }