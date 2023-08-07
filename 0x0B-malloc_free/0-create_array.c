#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array with a char initialized.
 * @size: The size of the array.
 * @c: Char initialized.
 *
 * Return: If size is 0 / fails - NULL.
 *        else a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
char *A;
unsigned int index;
if (size == 0)
return (NULL);
A = malloc(sizeof(char) * size);
if (A == NULL)
return (NULL);
for (index = 0; index < size; index++)
A[index] = c;
return (A);
}
