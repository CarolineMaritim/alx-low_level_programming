#include "main.h"
/**
 * binary_to_uint - Converts Binary to int.
 * @b: Character checked
 *
 * Return: Result number, else 0.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int num, power;
int len;

len = 0;
num = 0;
power = 1;
/*check if null*/
if (b == 0)
{
	return (0);
}
for (len = 0; b[len];)
len++;

for (len -= 1; len >= 0; len--)
{
	if (b[len] != '0' && b[len] != '1')
		return (0);
num += (b[len] - '0') * power;
power *= 2;
}
return (num);
}















