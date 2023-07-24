#include "main.h"
/**
 * swap_int - Swaps values of two integers.
 * @a: first int
 * @b: second int
 */
void swap_int(int *a, int *b)
{
int x = *a;
*a = *b;
*b = x;
}
