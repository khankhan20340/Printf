# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: muebrahi <muebrahi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/13 14:44:12 by muebrahi          #+#    #+#              #
#    Updated: 2023/11/06 15:34:27 by muebrahi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT_DIR = ../libft

SRCS = ft_printf.c		\
		ft_all_put_pf.c \
		ft_puthex_pf.c	\
		ft_aux_pf.c\

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIBFT_DIR)
	$(AR) $(NAME) $(OBJS) $(LIBFT_DIR)/*.o

%.o: %.c
	$(CC) $(CFLAGS) -I $(LIBFT_DIR) -I . -c $< -o $@

clean:
	@make clean -C $(LIBFT_DIR)
	rm -f $(OBJS)

fclean: clean
	@make fclean -C $(LIBFT_DIR)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
