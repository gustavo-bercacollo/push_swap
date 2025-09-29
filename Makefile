# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                      +:+ +:+         +:+      #
#    By: gbercaco <gbercaco@student.42.fr>          +#+  +:+       +#+         #
#                                                  +#+#+#+#+#+   +#+            #
#    Created: 2025/09/29 15:00:00 by gbercaco          #+#    #+#              #
#    Updated: 2025/09/29 15:00:00 by gbercaco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -Iinclude

SRCS = src/main.c \
       src/swap.c \
       src/utils.c \
       src/push.c

OBJS = $(SRCS:.c=.o)

# ------------------- Regras -------------------

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

# Compilação dos objetos
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
