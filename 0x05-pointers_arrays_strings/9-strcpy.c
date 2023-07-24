#include "main.h"
/**
 * *_strcpy - Copy string pointers.
 * @dest: Destination
 * @src: Source
 *
 * Return: Destination pointer
 */
char *_strcpy(char *dest, char *src)
{
int index = 0;
while (src[index])
{
dest[index] = src[index];
index++;
}
return (dest);
}
