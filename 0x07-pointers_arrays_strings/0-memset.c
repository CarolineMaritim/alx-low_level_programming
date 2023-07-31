#include "main.h"
/**
 * _memset - Fills Mem with const byte
 * @s: Pointer to memory area
 * @b: Character checked
 * @n: number of bytes.
 *
 * Return: Pointer to be filled.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int index;
char *memoryadd = s;
char word = b;
for (index = 0; index < n; index++)
memoryadd[index] = word;
return (s);
}
