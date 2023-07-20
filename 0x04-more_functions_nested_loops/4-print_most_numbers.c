#include "main.h"
/**
 * print_most_numbers - Prints other numbers.
 */
void print_most_numbers(void)
{
int num;
for (num = 48; num <= 57; num++)
{
if (num == 50 || num == 52)
{
continue;
}
_putchar(num);
}
_putchar('\n');
}
