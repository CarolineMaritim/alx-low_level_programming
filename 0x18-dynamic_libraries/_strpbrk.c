#include "main.h"
/**
 * _strpbrk - Searches a string for
 * any set of bytes.
 * @s: String checked
 * @accept: Substring match
 *
 * Return: Pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int index;
	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
