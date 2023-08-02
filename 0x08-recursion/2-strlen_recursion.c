#include "main.h"
/**
 * _strlen_recursion - Prints strn length
 * @s: String checked
 *
 * Return: Length
 */
int _strlen_recursion(char *s)
{
int len =0;
if (*s)
{
len++;
len += _strlen_recursion(s + 1);
}
return (len);
}
