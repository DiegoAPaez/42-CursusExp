# ft_printf 📚

## Project Goal

ft_printf is a custom implementation of the standard C library function printf. This project replicates the core behavior of printf, supporting various format specifiers, and was developed to deepen understanding of variadic functions, formatted output, and C programming concepts.

## Variadic Functions

In C programming, a variadic function adds flexibility to the program. It takes one fixed argument and then any number of arguments can be passed. The variadic function consists of at least one fixed variable and then an ellipsis(…) as the last parameter.

```c
int	ft_printf(char const *str, ...);
```

Values of the passed arguments can be accessed through the header file named <stdarg.h>

**_Methods_**
**va_start(va_list ap, argN)** - This enables access to variadic function arguments, where _va_list_ will be the pointer to the last fixed argument in the variadic function _argN_ is the last fixed argument in the variadic function.
From the above variadic function (ft_printf(char const *str, ...);), str is the last fixed argument making it the argN. Whereas *va_list ap\* will be a pointer to argN (str).

**va_arg(va_list ap, type)** - This one accesses the next variadic function argument, _va_list ap_ is the same as above i.e a pointer to argN, _type_ indicates the data type the _va_list ap_ should expect (double, float, int etc.).

**va_copy(va_list dest, va_list src)** - This makes a copy of the variadic function arguments.

**va_end(va_list ap)** - This ends the traversal of the variadic function arguments.

---

## Supported Format Specifiers

**%c**: Prints a single character.
**%s**: Prints a string.
**%p**: Prints a pointer address in hexadecimal format.
**%d** or **%i**: Prints a signed decimal integer (base 10).
**%u**: Prints an unsigned decimal integer (base 10).
**%x**: Prints a number in hexadecimal (lowercase).
**%X**: Prints a number in hexadecimal (uppercase).
**%%**: Prints the literal % symbol.

---

### Internal Helper

#### `ft_format_check`

**Prototype:** `int ft_format_check(va_list argp, char c);`
Responsible for processing a single format specifier and directing it to the appropriate helper function.

### Printer Functions Overview

Here is a brief description of the helper functions used in the implementation of `ft_printf`:

#### 1. `ft_putaddress`

**Prototype:** `int ft_putaddress(unsigned long long nb);`  
This function prints a memory address in hexadecimal format using lowercase letters (`abcdef`) and returns the number of characters printed.

---

#### 2. `ft_putchar`

**Prototype:** `int ft_putchar(char c);`  
Prints a single character to the standard output and returns the number of characters written (always 1).

---

#### 3. `ft_puthex`

**Prototype:** `int ft_puthex(unsigned int nb, char base);`  
Prints an unsigned integer in hexadecimal format. If `base` is `'x'`, it uses lowercase letters, and if `'X'`, it uses uppercase letters. Returns the number of characters printed.

---

#### 4. `ft_putnbr`

**Prototype:** `int ft_putnbr(int nb);`  
Prints an integer, including handling negative values and the edge case for the minimum integer (`-2147483648`). Returns the number of characters printed.

---

#### 5. `ft_putptr`

**Prototype:** `int ft_putptr(va_list argp);`  
Handles the conversion of a pointer to its string representation. If the pointer is `NULL`, it prints `(nil)`. Otherwise, it prefixes the address with `0x` and uses `ft_putaddress` to print the memory address. Returns the total number of characters printed.

---

#### 6. `ft_putstr`

**Prototype:** `int ft_putstr(char *s);`  
Prints a string. If the string is `NULL`, it prints `(null)`. Returns the total number of characters printed.

---

#### 7. `ft_putunbr`

**Prototype:** `int ft_putunbr(unsigned int nb);`  
Prints an unsigned integer. Returns the total number of characters printed.

---

These helper functions form the building blocks for the `ft_printf` implementation, handling specific data types and ensuring proper output formatting.

### Compilation & Testing

**1.** First generate the libftprintf.a library correctly with the command:

```console
make
```

This will create libftprintf.a and the necessary .o files.
**2.** Use the following command to compile tester.c and link it with your libftprintf.a:

```console
cc -Wall -Wextra -Werror tester.c -L. -lftprintf -o tester
```

**3.** Run the compiled tester:

```console
./tester
```
