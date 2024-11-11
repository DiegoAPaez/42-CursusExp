#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

void test_char_conversion() {
    printf("------------------------------\n");
    printf("Testing %%c conversion:\n");
    ft_printf("Custom: %c\n", 'A');
    printf("Original: %c\n\n", 'A');

    printf("Print NULL character\n");
    ft_printf("Custom: %c\n", '\0');
    printf("Original: %c\n\n", '\0');
}

void test_string_conversion() {
    printf("------------------------------\n");
    printf("Testing %%s conversion:\n");
    ft_printf("Custom: %s\n", "Hello, World!");
    printf("Original: %s\n\n", "Hello, World!");

    printf("Print empty string\n");
    ft_printf("Custom: %s\n", "");
    printf("Original: %s\n\n", "");

    printf("Print NULL string\n");
    char *null_str = NULL;
    ft_printf("Custom: %s\n", null_str);
    printf("Original: %s\n\n", null_str);
}

void test_pointer_conversion() {
    printf("------------------------------\n");
    printf("Testing %%p conversion:\n");
    int a = 42;
    ft_printf("Custom: %p\n", &a);
    printf("Original: %p\n\n", &a);

    printf("Print NULL pointer\n");
    ft_printf("Custom: %p\n", NULL);
    printf("Original: %p\n\n", NULL);
}

void test_integer_conversion() {
    printf("------------------------------\n");
    printf("Testing %%d and %%i conversion:\n");
    ft_printf("Custom: %d\n", 1234);
    printf("Original: %d\n\n", 1234);

    ft_printf("Custom: %d\n", -1234);
    printf("Original: %d\n\n", -1234);

    printf("INT_MAX:\n");
    ft_printf("Custom: %d\n", INT_MAX);
    printf("Original: %d\n\n", INT_MAX);

    printf("INT_MIN:\n");
    ft_printf("Custom: %d\n", INT_MIN);
    printf("Original: %d\n\n", INT_MIN);
}

void test_unsigned_conversion() {
    printf("------------------------------\n");
    printf("Testing %%u conversion:\n");
    ft_printf("Custom: %u\n", 1234U);
    printf("Original: %u\n\n", 1234U);

    printf("UINT_MAX:\n");
    ft_printf("Custom: %u\n", UINT_MAX);
    printf("Original: %u\n\n", UINT_MAX);

    ft_printf("Custom: %u\n", 0U);
    printf("Original: %u\n\n", 0U);
}

void test_hex_conversion() {
    printf("------------------------------\n");
    printf("Testing %%x and %%X conversion:\n");
    ft_printf("Custom: %x\n", 1234);
    printf("Original: %x\n\n", 1234);

    ft_printf("Custom: %X\n", 1234);
    printf("Original: %X\n\n", 1234);

    ft_printf("Custom: %x\n", UINT_MAX);
    printf("Original: %x\n\n", UINT_MAX);

    ft_printf("Custom: %X\n", UINT_MAX);
    printf("Original: %X\n\n", UINT_MAX);
}

void test_percentage_conversion() {
    printf("------------------------------\n");
    printf("Testing %% conversion:\n");
    ft_printf("Custom: %%\n");
    printf("Original: %%\n\n");
}

int main() {
    printf("Running all tests for ft_printf:\n\n");

    test_char_conversion();
    test_string_conversion();
    test_pointer_conversion();
    test_integer_conversion();
    test_unsigned_conversion();
    test_hex_conversion();
    test_percentage_conversion();

    return 0;
}
