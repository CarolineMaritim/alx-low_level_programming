#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Calculates sum of the input parameters.
 * @n: Parameters count.
 * @...: Variables to calculate.
 *
 * Return: If n == 0 - 0.
 *         else - the sum .
 */
int sum_them_all(const unsigned int n, ...)
{
/*determine where to store the list*/
va_list arg;
unsigned int i = 0;
unsigned int sum = 0;
va_start(arg, n);
/*iterate through the func*/
for (i = 0; i < n; i++)
/*enter the type of parameters you will input*/
sum += va_arg(arg, int);
/*end variadic func*/
va_end(arg);
return (sum);
}
