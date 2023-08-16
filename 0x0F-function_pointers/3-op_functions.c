#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Sum two numbers.
 * @a: First Number.
 * @b: Second Number.
 *
 * Return: The result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subraction of two numbers.
 * @a: First Number.
 * @b: Second Number.
 *
 * Return: The result.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two numbers.
 * @a: First Number.
 * @b: Second Number.
 *
 * Return: The result.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two numbers.
 * @a: First Number.
 * @b: Second Number.
 *
 * Return: The result.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Finds the remainder of the division of two numbers.
* @a: First Number.
 * @b: Second Number.
 *
 * Return: The result.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
