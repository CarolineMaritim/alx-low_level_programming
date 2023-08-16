#include "function_pointers.h"
/**
 * int_index - Searches for an integer
 * @array: Array checked.
 * @size: Size of array
 * @cmp: A pointer to function.
 *
 * Return: If no interger matches / size <= 0, -1.
 *         else - The index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
/*iterate through the array*/
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
