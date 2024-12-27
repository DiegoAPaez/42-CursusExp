#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "get_next_line.h"

// Function to test reading from a file and printing each line
void test_file(const char *filename)
{
    int fd = open(filename, O_RDONLY);
    char *line;
    int line_number = 1;

    if (fd < 0)
    {
        printf("Error: Could not open file %s\n", filename);
        return;
    }

    printf("Testing file: %s\n", filename);
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("Line %d: %s", line_number++, line);
        free(line);
    }
    close(fd);
    printf("End of file: %s\n\n", filename);
}

int main()
{
    // Basic Tests
    test_file("test_files/single_line.txt");       // Single line with no newline
    test_file("test_files/multiple_short_lines.txt"); // Multiple short lines
    test_file("test_files/single_long_line.txt");   // Single long line exceeding BUFFER_SIZE
    test_file("test_files/multiple_lines.txt"); // Multiple long lines exceeding BUFFER_SIZE

    // Edge Cases
    test_file("test_files/empty_file.txt");         // Empty file
    test_file("test_files/only_newlines.txt");      // File with only newlines
    test_file("test_files/mixed_newlines_chars.txt"); // Mixed characters and newlines
    test_file("test_files/ending_with_newline.txt");  // File ending with newline

    return 0;
}
