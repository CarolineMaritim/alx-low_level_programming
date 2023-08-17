#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
void print_character(va_list args);
void print_integer(va_list args);
void print_float(va_list args);
void print_string(va_list args);
void print_all(const char * const format, ...);

/**
 * print_character - Prints a char.
 * @args: Argument list.
 */
void print_character(va_list args)
{
char c;
/*char c will be promoted to int*/
c = va_arg(args, int);
printf("%c", c);
}

/**
 * print_integer - Prints an integer.
 * @args: Argument list.
 */
void print_integer(va_list args)
{
int num;
num = va_arg(args, int);
printf("%d", num);
}
/**
 * print_float - Prints a float.
 * @args: Argument list.
 */
void print_float(va_list args)
{
float num;
num = va_arg(args, double);
printf("%f", num);
}
/**
 * print_string - Prints a string.
 * @args: Argument list.
 */
void print_string(va_list args)
{
/*create a pointer to the string*/
char *strn;
strn = va_arg(args, char *);
/*check if strng is empty*/
if (strn == NULL)
{
printf("(nil)");
return;
}
printf("%s", strn);
}
/**
 * print_all - Prints all types of variables.
 * @format: represents types of variables.
 * @...: Number of unknown variables to input.
 */
void print_all(const char * const format, ...)
{
/*determine where to store the arguments*/
va_list count;
int i = 0;
int j = 0;
/*define the seperator to next argument*/
char *sep = "";
/* struct printer_tture containing format specifier*/
printer_t funcs[] = {
		{"c", print_character},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string}
	};
va_start(count, format);
/*outer while loop to check that the format is not null*/
while (format && (*(format + i)))
{
j = 0;
/*inner while loop to iterate through the format strn*/
while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
j++;
if (j < 4)
{
printf("%s", sep);
funcs[j].print(count);
sep = ", ";
}
i++;
}
printf("\n");
va_end(count);
}
