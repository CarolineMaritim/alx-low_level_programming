#include "main.h"
/**
 * clear_bit - Sets value to 0 at a given bit index
 * @n: Number being Checked
 * @index: Index
 *
 * Return: 1 if Success else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(n) * 8))/*check if index is in range*/
return (-1);
/* & op vlears bit while ~ swaps the values*/
*n &= ~(1 << index);
return (1);
}
