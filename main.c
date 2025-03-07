#include <stdio.h>

size_t ft_strlen(const char *str);
char *ft_strcpy(char *dst, char *src);
int ft_strcmp(const char *s1, const char *s2);

int main() {

    char *str = "Hello, world!\n";
    //ft_strlen
    printf("%zu\n", ft_strlen(str));

    //ft_strcpy
    char dst[14];
    printf("%s", ft_strcpy(dst, str));

    //ft_strcmp
    printf("compare \"salut\" et \"salut\" : %d\n", ft_strcmp("salut", "salut"));
    printf("compare \"abcd\" et \"abc\" : %d\n", ft_strcmp("abcd", "abc"));
    printf("compare \"salut\" et \"\" : %d\n", ft_strcmp("salut", ""));


    return 0;
}