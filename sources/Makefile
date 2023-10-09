# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 11:34:59 by goda-sil          #+#    #+#              #
#    Updated: 2023/10/09 09:38:50 by goda-sil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = main.c functions.c ft_calloc.c push.c swap.c reverse_rotate.c rotate.c sort.c sort_three_numbers.c sort_five_numbers.c \
		printf_utils.c printf_utils_two.c ft_printf.c sort_four_numbers.c sort_almost_all.c chuck_sort.c pass_a.c sort_almost_all_2.c

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -g
AR = ar rcs

SRC_OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(SRC_OBJS)
		@$(CC) $(CFLAGS) $(SRC_OBJS) -o push_swap

c:
		@$(RM) $(SRC_OBJS)


f: c
		@$(RM) $(NAME)

r: f all
