# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/19 09:56:56 by dpaez             #+#    #+#              #
#    Updated: 2024/09/19 10:05:06 by dpaez            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_display_file.c
OBJ = $(SRC:.c=.o)

AR = ar rcs
RM = rm -f

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $@ $^

%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
