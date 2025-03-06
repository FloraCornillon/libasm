#include <stdio.h>

size_t ft_strlen(const char *str);
char *ft_strcpy(char *dst, char *src);

int main() {

    char *str = "Hello, world!\n";
    //strlen
    printf("%zu\n", ft_strlen(str));

    //strcpy
    char dst[14];
    printf("%s", ft_strcpy(dst, str));


    return 0;
}