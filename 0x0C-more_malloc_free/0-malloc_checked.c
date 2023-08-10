#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Uses malloc to allocate mem.
 * @b: The number of bytes.
 *
 * Return: A pointer to memory allocated.
 */
void *malloc_checked(unsigned int b)
{
/*assign memory to be equal to mem used by uns int b*/
void *memory;
memory = malloc(b);
if (memory == NULL)
/*Terminate process with status value 98*/
exit(98);
return (memory);
}
