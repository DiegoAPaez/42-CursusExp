# 00-libft

### Introduction

The **Libft** project is a foundational library in the 42 curriculum, where we reimplement essential C standard library functions and additional useful functions. Below is a list of each function and file included in the library with a brief description.

---

### Library Files

- **ft_atoi.c**: Converts a string to an integer.
- **ft_bzero.c**: Sets a block of memory to zero.
- **ft_calloc.c**: Allocates memory for an array and initializes it to zero.
- **ft_isalnum.c**: Checks if a character is alphanumeric.
- **ft_isalpha.c**: Checks if a character is alphabetic.
- **ft_isascii.c**: Checks if a character is an ASCII character.
- **ft_isdigit.c**: Checks if a character is a digit.
- **ft_isprint.c**: Checks if a character is printable.
- **ft_itoa.c**: Converts an integer to a string.

### Linked List Bonus Functions

- **ft_lstadd_back_bonus.c**: Adds a new element at the end of a list.
- **ft_lstadd_front_bonus.c**: Adds a new element at the beginning of a list.
- **ft_lstclear_bonus.c**: Clears all elements from a list.
- **ft_lstdelone_bonus.c**: Deletes a single element from a list.
- **ft_lstiter_bonus.c**: Iterates over a list and applies a function to each element.
- **ft_lstlast_bonus.c**: Returns the last element of a list.
- **ft_lstmap_bonus.c**: Applies a function to each element of a list and creates a new list.
- **ft_lstnew_bonus.c**: Creates a new list element.
- **ft_lstsize_bonus.c**: Returns the size of a list.

### Memory Functions

- **ft_memchr.c**: Searches for a character in a block of memory.
- **ft_memcmp.c**: Compares two blocks of memory.
- **ft_memcpy.c**: Copies a block of memory.
- **ft_memmove.c**: Moves a block of memory.
- **ft_memset.c**: Sets a block of memory to a specified value.

### File Descriptor Functions

- **ft_putchar_fd.c**: Writes a character to a file descriptor.
- **ft_putendl_fd.c**: Writes a string followed by a newline to a file descriptor.
- **ft_putnbr_fd.c**: Writes an integer to a file descriptor.
- **ft_putstr_fd.c**: Writes a string to a file descriptor.

### String Manipulation Functions

- **ft_split.c**: Splits a string into an array of strings based on a delimiter.
- **ft_strchr.c**: Searches for a character in a string.
- **ft_strdup.c**: Duplicates a string.
- **ft_striteri.c**: Applies a function to each character of a string.
- **ft_strjoin.c**: Joins two strings into a new string.
- **ft_strlcat.c**: Concatenates two strings with a size limit.
- **ft_strlcpy.c**: Copies a string with a size limit.
- **ft_strlen.c**: Returns the length of a string.
- **ft_strmapi.c**: Applies a function to each character of a string to create a new string.
- **ft_strncmp.c**: Compares two strings up to a specified number of characters.
- **ft_strnstr.c**: Searches for a substring in a string up to a specified length.
- **ft_strrchr.c**: Searches for the last occurrence of a character in a string.
- **ft_strtrim.c**: Trims characters from the beginning and end of a string.
- **ft_substr.c**: Extracts a substring from a string.

### Header and Build Files

- **libft.h**: Header file containing function prototypes and type definitions.
- **Makefile**: Build script for compiling the library.
