#include "main.h"
/**
 * flip_bits - Returns the number of bits to flip given num
 * @n: First val checked
 * @m: Second value
 *
 * Return: Bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int op_xor = n ^ m;
unsigned long int b = 0;

while (op_xor > 0)
{
b += (op_xor & 1);/*check least significant bit*/
op_xor >>= 1;/*right-shift by 1*/
}
return (b);
}
