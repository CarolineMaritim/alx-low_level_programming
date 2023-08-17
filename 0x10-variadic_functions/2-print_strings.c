#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Prints strings.
 * @separator: The string to print btwn strings.
 * @n: The number of strings.
 * @...: A variable of strings.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
/*Determine where to store the list*/
va_list args;
/*create a pointer to string created*/
char *s;
unsigned int i;
va_start(args, n);
/*Create a for loop to iterate through*/
for (i = 0; i < n; i++)
{
s = va_arg(args, char *);
/*check if string empty*/
if (s == NULL)
printf("(nil)");
else
printf("%s", s);
/*check if there is a separator*/
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(args);
}
