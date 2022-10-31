# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zlazrak <zlazrak@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/27 14:44:57 by zlazrak           #+#    #+#              #
#    Updated: 2022/10/31 20:20:45 by zlazrak          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC =  ft_putaddr.c ft_putchar.c ft_puthex.c ft_putnbr.c ft_putstr.c ft_putun.c ft_printf.c
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar -rc $@ $?
.PHONY : all clean fclean re
clean :
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re: fclean all
	
