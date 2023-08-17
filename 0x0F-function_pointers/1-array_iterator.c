#include "function_pointers.h"
/**
 * array_iterator - Iterates a function in an array
 * @array: Array checked
 * @size: size of the aray
 * @action: Pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
while (size-- > 0)
{
action(*array);
array++;
}
}
