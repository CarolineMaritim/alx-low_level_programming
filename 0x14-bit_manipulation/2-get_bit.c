#include "main.h"
/**
 * get_bit - Returns the value of bit at diven index
 * @n: Number being checked.
 * @index: Index to be checked
 *
 * Return: Value of the bit index else -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/*check for error*/
	if (index >= (sizeof(n) * 8 ))/*number of bits in byte*/
	{
		return (-1);
	}
	if ((n & (1 << index)) == 0)/*bitwise operand & gives 1 if same*/
		return (0);
	else
		return (1);
}

