NAME = libasm.a

NASM = nasm
NASMFLAGS = -f elf64

#test main
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_strlen.s ft_strcpy.s ft_strcmp.s
OBJS = $(SRCS:.s=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.s
	$(NASM) $(NASMFLAGS) $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

#test main
test: $(NAME)
	$(CC) $(CFLAGS) main.c -L. -lasm


.PHONY: all clean fclean re test