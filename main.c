#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>


#define BUFFER_SIZE 100

size_t ft_strlen(const char *);
char *ft_strcpy(char *, char *);
int ft_strcmp(const char *, const char *);
ssize_t ft_write(int, const void *, size_t);
ssize_t ft_read(int, void *, size_t);
char *ft_strdup(const char *);

int main() {

    //ft_strlen
    printf("\nft_strlen \n");
    char *str = "Hello, world!\n";
    printf("%zu\n", ft_strlen(str));

    //ft_strcpy
    printf("\nft_strcpy \n");
    char dst[14];
    printf("%s", ft_strcpy(dst, str));

    //ft_strcmp
    printf("\nft_strcmp \n");
    printf("compare \"salut\" et \"salut\" : %d\n", ft_strcmp("salut", "salut"));
    printf("compare \"abcd\" et \"abc\" : %d\n", ft_strcmp("abcd", "abc"));
    printf("compare \"salut\" et \"\" : %d\n", ft_strcmp("salut", ""));
    printf("compare \"ab\" et \"abcde\" : %d\n", ft_strcmp("ab", "abcde"));
    printf("compare \"\" et \"\" : %d\n", ft_strcmp("", ""));

    //ft_write
    printf("\nft_write \n");
    ssize_t ret;
    ret = ft_write(1, "Salut\n", 6);
    printf("retour fd 1: %zd\nErrno: %d\n", ret, errno);
    ret = ft_write(-1, "Salut\n", 6);
    printf("retour fd 1: %zd\nErrno: %d\n", ret, errno);

    //ft_read
    printf("\nft_read \n");
    char buff[BUFFER_SIZE + 1];
    int fd = open("text.txt", O_RDONLY);
    if (fd < 0) {
        perror("open");
        return (1);
    }
    ssize_t bytes_read;
    while ((bytes_read = ft_read(fd, buff, BUFFER_SIZE)) > 0) {
        buff[bytes_read] = '\0';
        printf("%s", buff);
    }
    if (bytes_read < 0)
        perror("ft_read");
    close(fd);


    //ft_strdup
    printf("\n\nft_strdup \n");
    char *dup = ft_strdup("Salut");
    printf("%s\n", dup);
    char *dup1 = ft_strdup("");
    printf("%s\n", dup1);
    char *dup2 = ft_strdup(NULL);
    if (dup2)
        printf("%s\n", dup2);
    else
        printf("(null)\n");

    return 0;
}