#include "main.h"
/**
 * _puts - Prints a string.
 * @str: String checked
 */
void _puts(char *str)
{
while (*str)
_putchar(*str++);
_putchar('\n');
}
