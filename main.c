#include <stdio.h>
#include <unistd.h>
#include <errno.h>

size_t ft_strlen(const char *);
char *ft_strcpy(char *, char *);
int ft_strcmp(const char *, const char *);
ssize_t ft_write(int, const void *, size_t);

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
    printf("compare \"ab\" et \"abcde\" : %d\n", ft_strcmp("ab", "abcde"));
    printf("compare \"\" et \"\" : %d\n", ft_strcmp("", ""));

    //ft_write
    ssize_t ret;
    ret = ft_write(1, "Salut\n", 6);
    printf("retour fd 1: %zd\nErrno: %d\n", ret, errno);
    ret = ft_write(-1, "Salut\n", 6);
    printf("retour fd 1: %zd\nErrno: %d\n", ret, errno);



    return 0;
}