#include "main.h"
/**
 * print_diagonal - Draws a diagonal line.
 * @n: Number of times.
 */
void print_diagonal(int n)
{
if (n > 0)
{
int x, tab;
for (x = 0; x < n; x++)
{
for (tab = 0; tab < x; tab++)
_putchar(' ');
_putchar('\\');
if (x == n - 1)
continue;
_putchar('\n');
}
}
_putchar('\n');
}
