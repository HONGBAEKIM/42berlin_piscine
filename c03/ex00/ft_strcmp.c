 #include <stdio.h>
 #include <string.h>
 
 int ft_strcmp(char *s1, char *s2)
 {
    int i;

    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
 }

 int main()
 {
    char a[] = "abc";
    char b[] = "aef";

    printf("%d\n", ft_strcmp(a, b));
    printf("%d\n", strcmp(a, b));

 }