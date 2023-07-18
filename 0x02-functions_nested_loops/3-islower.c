#include "main.h"
/**
 * _islower - Checks for lower char
 *
 * @c: character to be checked
 * Return: 1 if lower, 0 if not
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
