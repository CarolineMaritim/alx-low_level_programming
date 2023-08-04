#include "main.h"
/**
 * _strncpy - Copies strngs
 * @dest: Destination strng
 * @src: Source strng.
 * @n: Max number of bytes
 *
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int index = 0;
int src_len = 0;
while (src[index++])
src_len++;
for (index = 0; src[index] && index < n; index++)
dest[index] = src[index];
for (index = src_len; index < n; index++)
dest[index] = '\0';
return (dest);
}
