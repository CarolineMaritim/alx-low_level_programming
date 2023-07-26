#include "main.h"
/**
 * leet - Encodes str to 1337
 * @str: String encoded.
 *
 * Return: String output
 */
char *leet(char *str)
{
while (*str)
{
if (*str == 'A' || *str == 'a')
*str = '4';
else if (*str == 'E' || *str == 'e')
*str = '3';
else if (*str == 'L' || *str == 'l')
*str = '1';
else if (*str == 'O' || *str == 'o')
*str = '0';
else if (*str == 'T' || *str == 't')
*str = '7';
str++;
}
return (str);
}
