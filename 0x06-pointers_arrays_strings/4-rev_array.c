#include "main.h"
/**
 * reverse_array - Reverses an array
 * @a: Ints to be reversed
 * @n: Number of elements in an array
 */
void reverse_array(int *a, int n)
{
int x;
int index = n - 1;
for (index = n - 1; index >= n / 2; index--)
{
x = a[n - 1 - index];
a[n - 1 - index] = a[index];
a[index] = x;
}
}
