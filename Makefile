CC =	gcc
CFLAG = -Wall -Wextra -Werror
NAME =	libftprintf.a
SRCS = ft_putchar.c ft_putstr.c
OBJS =	$(SRCS:.c=.o)
RM =	rm -f

all: $(NAME)

.c.o:
	$(CC) $(CFLAG) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
