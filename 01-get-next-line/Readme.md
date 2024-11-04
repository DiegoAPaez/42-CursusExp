# get_next_line 📚

## Project Goal

The goal of the `get_next_line` project is to implement a function that reads a line from a file descriptor and returns it, simulating the behavior of reading lines in a standard input/output environment. This function should be capable of reading from any valid file descriptor, handling different buffer sizes efficiently, and managing multiple edge cases such as newline characters and end-of-file conditions.

The function reads from a file or input stream until a newline is encountered or the end of the file is reached. This project helps you understand memory management, buffer handling, and file I/O operations in C.

## Function Prototypes

### Core Function

```c
char *get_next_line(int fd);
```

**Description:** Reads a line from the given file descriptor fd and returns it as a string. The function should manage memory dynamically and handle any BUFFER_SIZE specified at compile time.

### Helper Functions

`size_t ft_strlen(const char *src):` _Returns the length of the string src._

`char *ft_strchr(const char *s, int c):` _Duplicates the string src and returns a pointer to the new string._

`char *ft_substr(char const *s, unsigned int start, size_t len):` _Extracts a substring from the string s, starting at index start and spanning len characters, and returns it as a new string._

`char *ft_strjoin(char const *s1, char const *s2):` _Joins the strings s1 and s2 into a new dynamically allocated string._

`char *ft_freeline(char *string):` _Frees the memory of the string and adjusts the contents for subsequent reads._

`char *ft_readfile(int fd, char *string, char *buffer):` _Reads from the file descriptor fd and appends the content to string using buffer._

`char *ft_buffer_handler(char *string, char *buffer):` _Handles appending the buffer content to string safely and efficiently._

`char *ft_release(char *s):` _Frees the memory pointed to by s and returns NULL to ensure safe memory handling._

### Implementation Details

- **Memory Management**: Proper allocation and deallocation of memory are critical for this project to avoid memory leaks and ensure efficient use of system resources.
- **Edge Cases**: The implementation should handle multiple edge cases, including:
  - Multiple consecutive newline characters.
  - Empty files and files that do not end with a newline.
  - Varying BUFFER_SIZE values (including very small and very large sizes).
- **Static Variables**: The project uses a static variable to maintain the state between function calls and allow reading from the file descriptor across multiple calls to get_next_line.
