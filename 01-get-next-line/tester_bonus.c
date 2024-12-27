#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "get_next_line_bonus.h"

void test_bonus(const char *file1, const char *file2, const char *file3)
{
    char *line;
    int fd1, fd2, fd3;
    int line_number = 1;

    fd1 = open(file1, O_RDONLY);
    fd2 = open(file2, O_RDONLY);
    fd3 = open(file3, O_RDONLY);

    if (fd1 < 0 || fd2 < 0 || fd3 < 0)
    {
        printf("Error: Could not open one or more files\n");
        if (fd1 >= 0) close(fd1);
        if (fd2 >= 0) close(fd2);
        if (fd3 >= 0) close(fd3);
        return;
    }

    printf("Testing BONUS:\n");
    while (1)
    {
        int read_any = 0;

        line = get_next_line(fd1);
        if (line)
        {
            printf("File 1, Line %02d: %s", line_number, line);
            free(line);
            read_any = 1;
        }

        line = get_next_line(fd2);
        if (line)
        {
            printf("File 2, Line %02d: %s", line_number, line);
            free(line);
            read_any = 1;
        }

        line = get_next_line(fd3);
        if (line)
        {
            printf("File 3, Line %02d: %s", line_number, line);
            free(line);
            read_any = 1;
        }

        if (!read_any)
            break;

        line_number++;
    }

    close(fd1);
    close(fd2);
    close(fd3);
}

int main()
{
    // Bonus
    test_bonus("test_files/bonus1.txt", "test_files/bonus2.txt", "test_files/bonus3.txt");
    //test_bonus("test_files/bonus_single_long_line1.txt", "test_files/bonus_single_long_line2.txt", "test_files/empty_file.txt");

    return 0;
}
