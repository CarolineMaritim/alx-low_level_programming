#include "main.h"
/**
 * _abs - Gets absolute value of integer
 *
 * @n: value to be computed
 *
 * Return: The abs value of integer
 */
int _abs(int n)
{
if (n < 0)
{
int abs_val;
abs_val = n * -1;
return (abs_val);
}
return (n);
}
