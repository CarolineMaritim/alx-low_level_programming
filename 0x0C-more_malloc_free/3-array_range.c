#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates arr of ints from min to max.
 * @min: First value.
 * @max: Last value.
 *
 * Return: If min > max / malloc fails - NULL.
 *         else - a pointer to the new array.
 */
int *array_range(int min, int max)
{
int *arr;
int i;
int size;
/*check if min is greater than max*/
if (min > max)
return (NULL);
/*calculate set of values in range*/
size = max - min + 1;
/*allocate memory for int array*/
arr = malloc(sizeof(int) * size);
/*check if memory allocation was successful*/
if (arr == NULL)
return (NULL);
/*assign values from min to max in new arr*/
for (i = 0; i < size; i++)
{
arr[i] = min;
min++;
}
return (arr);
}
