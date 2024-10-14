/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 10:27:48 by dpaez             #+#    #+#             */
/*   Updated: 2024/10/14 10:29:09 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
//#include <string.h>
//#include <stdlib.h>

/*// Function prototypes, assuming your custom versions have the same names
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int x);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *str);
int		ft_memcmp(const void *p1, const void *p2, size_t size);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *src);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
void	ft_bzero(void *dest, size_t n);
void	*ft_memset(void *dest, int ch, size_t count);
void	*ft_memcpy(void *dest, void *src, size_t nb);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *p, int value, size_t size);
void	*ft_calloc(size_t count, size_t size);*/

// Test functions

void test_ft_isalpha() {
    printf("ft_isalpha('A') = %d\n", ft_isalpha('A')); // Expected 1
    printf("ft_isalpha('z') = %d\n", ft_isalpha('z')); // Expected 1
    printf("ft_isalpha('1') = %d\n", ft_isalpha('1')); // Expected 0
    printf("ft_isalpha('!') = %d\n", ft_isalpha('!')); // Expected 0
}

void test_ft_isdigit() {
    printf("ft_isdigit('5') = %d\n", ft_isdigit('5')); // Expected 1
    printf("ft_isdigit('0') = %d\n", ft_isdigit('0')); // Expected 1
    printf("ft_isdigit('a') = %d\n", ft_isdigit('a')); // Expected 0
    printf("ft_isdigit('$') = %d\n", ft_isdigit('$')); // Expected 0
}

void test_ft_isalnum() {
    printf("ft_isalnum('A') = %d\n", ft_isalnum('A')); // Expected 1
    printf("ft_isalnum('1') = %d\n", ft_isalnum('1')); // Expected 1
    printf("ft_isalnum('!') = %d\n", ft_isalnum('!')); // Expected 0
    printf("ft_isalnum(' ') = %d\n", ft_isalnum(' ')); // Expected 0
}

void test_ft_isascii() {
    printf("ft_isascii(65) = %d\n", ft_isascii(65));  // Expected 1 (A)
    printf("ft_isascii(0) = %d\n", ft_isascii(0));    // Expected 1 (Null char)
    printf("ft_isascii(200) = %d\n", ft_isascii(200)); // Expected 0
    printf("ft_isascii(-1) = %d\n", ft_isascii(-1));  // Expected 0
}

void test_ft_isprint() {
    printf("ft_isprint(65) = %d\n", ft_isprint(65));  // Expected 1 (A)
    printf("ft_isprint(32) = %d\n", ft_isprint(32));  // Expected 1 (Space)
    printf("ft_isprint(31) = %d\n", ft_isprint(31));  // Expected 0 (Non-printable)
    printf("ft_isprint(127) = %d\n", ft_isprint(127)); // Expected 0 (DEL char)
}

void test_ft_toupper() {
    printf("ft_toupper('a') = %c\n", ft_toupper('a')); // Expected 'A'
    printf("ft_toupper('A') = %c\n", ft_toupper('A')); // Expected 'A'
    printf("ft_toupper('1') = %c\n", ft_toupper('1')); // Expected '1'
    printf("ft_toupper('!') = %c\n", ft_toupper('!')); // Expected '!'
}

void test_ft_tolower() {
    printf("ft_tolower('A') = %c\n", ft_tolower('A')); // Expected 'a'
    printf("ft_tolower('a') = %c\n", ft_tolower('a')); // Expected 'a'
    printf("ft_tolower('1') = %c\n", ft_tolower('1')); // Expected '1'
    printf("ft_tolower('!') = %c\n", ft_tolower('!')); // Expected '!'
}

void test_ft_atoi() {
    printf("ft_atoi(\"123\") = %d\n", ft_atoi("123")); // Expected 123
    printf("ft_atoi(\"-42\") = %d\n", ft_atoi("-42")); // Expected -42
    printf("ft_atoi(\"   +567\") = %d\n", ft_atoi("   +567")); // Expected 567
    printf("ft_atoi(\"0\") = %d\n", ft_atoi("0")); // Expected 0
}

void test_ft_memcmp() {
    char s1[] = "abc";
    char s2[] = "abc";
    char s3[] = "abd";
    printf("ft_memcmp(s1, s2, 3) = %d\n", ft_memcmp(s1, s2, 3)); // Expected 0
    printf("ft_memcmp(s1, s3, 3) = %d\n", ft_memcmp(s1, s3, 3)); // Expected < 0
    printf("ft_memcmp(s1, s3, 2) = %d\n", ft_memcmp(s1, s3, 2)); // Expected 0
    printf("ft_memcmp(s1, s3, 1) = %d\n", ft_memcmp(s1, s3, 1)); // Expected 0
}

void test_ft_strncmp() {
    printf("ft_strncmp(\"abc\", \"abc\", 3) = %d\n", ft_strncmp("abc", "abc", 3)); // Expected 0
    printf("ft_strncmp(\"abc\", \"abd\", 3) = %d\n", ft_strncmp("abc", "abd", 3)); // Expected < 0
    printf("ft_strncmp(\"abc\", \"abd\", 2) = %d\n", ft_strncmp("abc", "abd", 2)); // Expected 0
    printf("ft_strncmp(\"abc\", \"a\", 1) = %d\n", ft_strncmp("abc", "a", 1)); // Expected 0
}

void test_ft_strlen() {
    printf("ft_strlen(\"hello\") = %lu\n", ft_strlen("hello")); // Expected 5
    printf("ft_strlen(\"\") = %lu\n", ft_strlen("")); // Expected 0
}

void test_ft_strlcpy() {
    char dst[10];
    ft_strlcpy(dst, "hello", 10);
    printf("ft_strlcpy: %s\n", dst); // Expected "hello"
    ft_strlcpy(dst, "world", 4);
    printf("ft_strlcpy (truncated): %s\n", dst); // Expected "wor"
}

void test_ft_strlcat() {
    char dst[10] = "hello";
    ft_strlcat(dst, "world", 10);
    printf("ft_strlcat: %s\n", dst); // Expected "helloworl"
    char dst2[5] = "hi";
    ft_strlcat(dst2, "world", 5);
    printf("ft_strlcat (truncated): %s\n", dst2); // Expected "hiwo"
}

void test_ft_bzero() {
    char str[10] = "abcdef";
    ft_bzero(str, 3);
    printf("ft_bzero: %s\n", &str[3]); // Expected "def"
    ft_bzero(str + 3, 3);
    printf("ft_bzero: %s\n", &str[6]); // Expected "f"
}

void test_ft_memset() {
    char str[10] = "abcdef";
    ft_memset(str, 'x', 3);
    printf("ft_memset: %s\n", str); // Expected "xxxdef"
    ft_memset(str + 3, 'y', 3);
    printf("ft_memset: %s\n", str); // Expected "xxxyyy"
}

void test_ft_memcpy() {
    char src[] = "hello";
    char dest[10];
    ft_memcpy(dest, src, 5);
    printf("ft_memcpy: %s\n", dest); // Expected "hello"
    ft_memcpy(dest + 2, src, 3);
    printf("ft_memcpy (overlap): %s\n", dest); // Expected "hehel"
}

void test_ft_memmove() {
    char src[] = "hello";
    ft_memmove(src + 2, src, 3);
    printf("ft_memmove: %s\n", src); // Expected "hehel"
    char src2[] = "overlap";
    ft_memmove(src2 + 4, src2, 4);
    printf("ft_memmove: %s\n", src2); // Expected "overover"
}

void test_ft_memchr() {
    char str[] = "abcdef";
    printf("ft_memchr: %s\n", (char *)ft_memchr(str, 'c', 6)); // Expected "cdef"
    printf("ft_memchr (not found): %p\n", ft_memchr(str, 'z', 6)); // Expected (null)
}

void test_ft_calloc() {
    int *arr = ft_calloc(4, sizeof(int));
    printf("ft_calloc: %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]); // Expected "0 0 0 0"
    free(arr);
    arr = ft_calloc(0, sizeof(int));
    printf("ft_calloc (zero allocation): %p\n", arr); // Expected non-null pointer
    free(arr);
}

int main() {
    // Call test functions
    test_ft_isalpha();
    test_ft_isdigit();
    test_ft_isalnum();
    test_ft_isascii();
    test_ft_isprint();
    test_ft_toupper();
    test_ft_tolower();
    test_ft_atoi();
    test_ft_memcmp();
    test_ft_strncmp();
    test_ft_strlen();
    test_ft_strlcpy();
    test_ft_strlcat();
    test_ft_bzero();
    test_ft_memset();
    test_ft_memcpy();
    test_ft_memmove();
    test_ft_memchr();
    test_ft_calloc();
    
    // Add more test functions here for remaining prototypes
    return 0;
}

