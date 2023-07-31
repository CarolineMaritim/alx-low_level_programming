#include "main.h"
/**
 * _strchr - Locates char in a str
 * @s: String checked.
 * @c: Character checked.
 *
 * Return: Pointer to first char found.
 * else NULL.
 */
char *_strchr(char *s, char c)
{
int index;
for (index = 0; s[index] != '\0'; index++)
{
if (s[index] == c)
return (s + index);
}
return ('\0');
}
