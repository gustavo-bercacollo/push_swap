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
CFLAGS = -Wall -Wextra -Werror

SRCS = main.c swap.c utils.c
OBJS = $(SRCS:.c=.o)

# ------------------- Regras -------------------

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
