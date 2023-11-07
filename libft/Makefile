# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: muebrahi <muebrahi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/15 15:00:58 by muebrahi          #+#    #+#              #
#    Updated: 2023/07/13 14:56:54 by muebrahi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SRCS =	ft_strdup.c\
		 ft_split.c\
		 ft_isalnum.c \
		 ft_bzero.c \
		 ft_memset.c\
		 ft_memcpy.c\
		 ft_memmove.c\
		 ft_memchr.c\
		 ft_memcmp.c\
		 ft_strlen.c \
		 ft_isalpha.c \
		 ft_isdigit.c \
		 ft_isascii.c \
		 ft_isprint.c \
		 ft_toupper.c \
		 ft_tolower.c \
		 ft_strchr.c \
		 ft_strrchr.c\
		 ft_strlcpy.c \
		 ft_strlcat.c \
		 ft_calloc.c\
		 ft_strncmp.c \
		 ft_strjoin.c\
		 ft_strtrim.c\
		 ft_striteri.c\
		 ft_putstr_fd.c\
		 ft_putchar_fd.c\
		 ft_putnbr_fd.c\
		 ft_strnstr.c\
		 ft_substr.c\
		 ft_putendl_fd.c\
		 ft_strmapi.c\
		 ft_atoi.c \
		 ft_itoa.c\

OBJS = $(SRCS:.c=.o)
HEADER = libft.h


CC = gcc
CFLAGS = -Wall -Werror -Wextra

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

