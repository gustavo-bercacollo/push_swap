NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I include -I libft/include
LIBS = -L libft -lft

SRCS = src/main.c src/swap.c src/utils.c src/push.c src/rotate.c src/reverse.c
OBJS = $(SRCS:.c=.o)

all: libft $(NAME)

# Chama o Makefile da libft
libft:
	$(MAKE) -C libft

# Compila push_swap linkando com libft.a
$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) $(INCLUDES) $(LIBS) -o $(NAME)

# Regra para compilar cada .c
%.o: %.c
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)
	@$(MAKE) -C libft clean

fclean: clean
	rm -f $(NAME)
	@$(MAKE) -C libft fclean

re: fclean all

.PHONY: all clean fclean re libft
