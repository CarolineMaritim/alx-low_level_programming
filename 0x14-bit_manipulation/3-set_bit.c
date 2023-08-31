#include "main.h"
/**
 * set_bit - Sets value it to 1 at a given index
 * @n: The number being checked
 * @index: The index checked
 *
 * Return: 1 if success , else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(n) * 8))/*checking for errors*/
return (-1);
*n ^= (1 << index);/*bitwise operand XOR*/
return (1);
}
