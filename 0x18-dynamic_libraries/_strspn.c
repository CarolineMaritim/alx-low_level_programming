#include "main.h"
/**
 * _strspn - Gets substrn length.
 * @s: String checked.
 * @accept: Substr checked
 *
 * Return: Number of bytes in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	unsigned int index;
	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s ==  *(accept + index))
			{
				bytes++;
				break;
			}
		}
		s++;
	}
	return (bytes);
}
