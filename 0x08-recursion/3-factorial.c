#include "main.h"
/**
 * factorial - Returns a factorial of a num
 * @n: Number checked
 *
 * Return: If n < 0, -1
 */
int factorial(int n)
{
int fact = n;
if (n < 0)
return (-1);
else if (n >= 0 && n <= 1)
return (1);
fact *= factorial(n - 1);
return (fact);
}
