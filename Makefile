CC =	gcc
CFLAG = -Wall -Wextra -Werror
NAME =	libftprintf.a
SRCS = ft_putchar.c ft_putstr.c ft_strlen.c ft_putnbr.c ft_percent.c ft_putnbr_u.c ft_putnbr_p.c ft_putnbr_lx16.c ft_putnbr_ux16.c ft_printf.c
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
