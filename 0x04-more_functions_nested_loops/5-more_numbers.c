#include "main.h"
/**
 * more_numbers - Prints numbers x10
 */
void more_numbers(void)
{
int num1, num2;
for (num2 = 0; num2 <= 9; num2++)
{
for (num1 = 0; num1 <= 14; num1++)
{
if (num1 > 9)
_putchar((num1 / 10) + '0');
_putchar((num1 % 10) + '0');
}
_putchar('\n');
}
}
