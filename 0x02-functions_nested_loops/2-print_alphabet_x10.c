#include "main.h"
/**
 * print_alphabet_x10 - Prints lowercase alphabet x10
 *
*/
void print_alphabet_x10(void)
{
char alphabet;
int num = 0;
while (num++ <= 9)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
_putchar(alphabet);
_putchar('\n');
}
}
