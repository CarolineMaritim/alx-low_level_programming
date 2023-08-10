#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array.
 * @nmemb: Number of elements.
 * @size: Size of each array element.
 *
 * Return: If nmemb = 0 /size = 0 / function fails - NULL.
 *         else - a pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *memory;
char *value;
unsigned int index;
/*chck if there are any elements in the array*/
if (nmemb == 0 || size == 0)
return (NULL);
/*allocate memory using malloc*/
memory = malloc(size * nmemb);
if (memory == NULL)
return (NULL);
value = memory;
for (index = 0; index < (size * nmemb); index++)
value[index] = '\0';
return (memory);
}
