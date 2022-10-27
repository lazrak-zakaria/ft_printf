# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zlazrak <zlazrak@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/27 14:44:57 by zlazrak           #+#    #+#              #
#    Updated: 2022/10/27 15:21:23 by zlazrak          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = 
SRC =  src/ft_putaddr.c src/ft_putchar.c src/ft_puthex.c src/ft_putnbr.c src/ft_putstr.c src/ft_putun.c ft_printf.c
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar -rc $@ $?

clean :
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re: fclean all
	