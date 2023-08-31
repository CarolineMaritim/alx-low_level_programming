#include "main.h"
/**
 * print_binary - Prints binary rep of a num
 * @n: Long interger checked
 */
void print_binary(unsigned long int n)
{
if (n > 1)
/*using recurssiion*/
print_binary(n >> 1);
_putchar((n & 1) + '0');/*convert to character*/
}
