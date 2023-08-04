#include "main.h"
/**
 * _strcmp - Compares 2 strngs
 * @s1: First strng
 * @s2: Second strng
 *
 * Return: Negative if s1 < s2
 * 0 if s1 == s2, else positive
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
