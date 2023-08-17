#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/**
 * struct printer - Structure for printing symbols
 * @symbol: Symbols to identify a function
 * @print: A pointer to a function
 */
typedef struct printer
{
char *symbol;
void (*print)(va_list args);
} printer_t;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
