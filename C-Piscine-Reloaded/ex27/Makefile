# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/19 09:56:56 by dpaez             #+#    #+#              #
#    Updated: 2024/09/24 17:10:40 by dpaez            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror
SOURCES = main.c
DEST = ft_display_file

all: compile

compile:
	gcc $(CFLAGS) -o $(DEST) $(SOURCES)

clean:
	rm -f *.o

fclean: clean
	rm -f $(DEST)
