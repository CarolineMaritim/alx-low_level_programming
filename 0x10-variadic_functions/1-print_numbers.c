#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers.
 * @separator: The string printed between numbers.
 * @n: The number of integers.
 * @...: A variable of number input.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
/*where to store your list*/
va_list arg;
unsigned int i;
va_start(arg, n);
/*loop through*/
for (i = 0; i < n; i++)
{
printf("%d", va_arg(arg, int));
/*check if there is a separator*/
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(arg);
}
