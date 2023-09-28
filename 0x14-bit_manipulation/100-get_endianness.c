#include "main.h"
/**
 * get_endianness - Checks endianness if little or big
 * Return: 0 if big, else 1
 */
int get_endianness(void)
{
	int bit = 1;
	char *e = (char *)&bit;
	if (*e == 1)/*if lS byte is 1 then it's a little endian*/
		return (1);
	return (0);
}

