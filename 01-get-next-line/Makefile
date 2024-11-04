# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/04 11:54:52 by dpaez             #+#    #+#              #
#    Updated: 2024/11/04 11:54:59 by dpaez            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile for testing get_next_line

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -D BUFFER_SIZE=5

# Source files
SRC = tester.c get_next_line.c get_next_line_utils.c

# Executable name
TARGET = tester

# Default rule
all: $(TARGET)

# Compile the target
$(TARGET): $(SRC)
	$(CC) $(SRC) -o $(TARGET) $(CFLAGS)

# Rule to run the program with Valgrind
valgrind: $(TARGET)
	valgrind --leak-check=full --track-origins=yes ./$(TARGET)

# Clean rule to remove output files
clean:
	rm -f $(TARGET)

# Phony targets
.PHONY: all clean valgrind
