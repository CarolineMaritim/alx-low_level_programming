#include "main.h"
/**
 * _strlen - Checks length of str.
 * @s: String checked
 *
 * Return: Length of the str
 */
int _strlen(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}
return (length);
}
