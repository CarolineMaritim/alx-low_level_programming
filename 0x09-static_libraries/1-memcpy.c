#include "main.h"
/**
 * _memcpy - Copies Mem area.
 * @dest: Destination
 * @src: Source
 * @n: Number of bytes.
 *
 * Return: Pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int index;
char *destination = dest;
char *source = src;
for (index = 0; index < n; index++)
destination[index] = source[index];
return (dest);
}
