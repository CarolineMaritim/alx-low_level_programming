#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated mem
 * of the string given.
 * @str: The string checked.
 *
 * Return: If str is NULL/ memory is not available - NULL.
 *         else - a pointer to the copied string.
 */
char *_strdup(char *str)
{
char *s;
int index = 0;
int len = 0;
if (str == NULL)
return (NULL);
for (index = 0; str[index]; index++)
len++;
s = malloc(sizeof(char) * (len + 1));
if (s == NULL)
return (NULL);
for (index = 0; str[index]; index++)
s[index] = str[index];
s[len] = '\0';
return (s);
}
