# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/11 11:37:23 by dpaez             #+#    #+#              #
#    Updated: 2024/11/11 11:52:16 by dpaez            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

INCLUDE = printf.h

SRC = ft_putaddress.c \
	ft_putchar.c \
	ft_puthex.c \
	ft_putnbr.c \
	ft_putstr.c \
	ft_putunbr.c \

OBJ = $(SRC:.c=.o)

AR = ar rcs

RM = rm -f

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c $(INCLUDE) Makefile
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
