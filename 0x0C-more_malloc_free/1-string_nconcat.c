#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concats two strings using at
 * @s1: First string.
 * @s2: Second string.
 * @n: Number of bytes of s2 to concat to s1.
 *
 * Return: NULL, If the function fails.
 *         Else- a pointer to the result space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s3;
unsigned int len = n;
unsigned int index;
/*check if both strings are empty*/
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
/*as index increases length increases*/
for (index = 0; s1[index]; index++)
len++;
/*allocate memory to new string*/
s3 = malloc(sizeof(char) * (len + 1));
/*check if concatanated string is null*/
if (s3 == NULL)
return (NULL);
len = 0;
for (index = 0; s1[index]; index++)
/*Copy char from s1 to s3 as len increaments*/
s3[len++] = s1[index];
for (index = 0; s2[index] && index < n; index++)
s3[len++] = s2[index];
/*Copy char from s2 to s3 as len increaments*/
s3[len] = '\0';
return (s3);
}
