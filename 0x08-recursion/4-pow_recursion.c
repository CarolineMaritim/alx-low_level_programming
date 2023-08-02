#include "main.h"
/**
 * _pow_recursion - Returns power of numbers
 * @x: Value checked
 * @y: The power number
 *
 * Return: If y < 0, -1
 */
int _pow_recursion(int x, int y)
{
int power = x;
if  (y < 0)
return (-1);
else if (y == 0)
return (1);
power *= _pow_recursion(x, y - 1);
return (power);
}
