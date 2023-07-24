#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints elements in an array
 * @a: Array checked
 * @n: Number of elements
 */
void print_array(int *a, int n)
{
int index = 0;
for (index = 0; index < n; index++)
{
printf("%d", a[index]);
if (index == n - 1)
continue;
printf(", ");
}
printf("\n");
}
