#include "function_pointers.h"
/**
 * print_name - Function that Prints name.
 * @name: Name to print.
 * @f: A pointer to the function that prints that name.
 */
void print_name(char *name, void (*f)(char *))
{
/*call the function*/
f(name);
}
