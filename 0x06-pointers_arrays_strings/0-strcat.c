#include "main.h"
/**
 * _strcat - Concatenates 2 strngs.
 * @dest: First strng
 * @src: Second strng
 *
 * Return: Pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
while (*dest)
dest++;
while (*src)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (dest);
}
