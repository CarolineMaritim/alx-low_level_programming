#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concats two strings.
 * @s1: First string.
 * @s2: The string to be added to s1.
 *
 * Return: If function fails - NULL.
 *         else - a pointer the newly-allocated Mem space.
 */
char *str_concat(char *s1, char *s2)
{
char *s3;
int index = 0;
int s3_index = 0;
int len = 0;
/*if both strings are NULL they are empty*/
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
/*as index increments length increments*/
for (index = 0; s1[index] || s2[index]; index++)
len++;
/*reserve memory to be allocated to new string*/
s3 = malloc(sizeof(char) * (len + 1));
if (s3 == NULL)
return (NULL);
for (index = 0; s1[index]; index++)
s3[s3_index++] = s1[index];
for (index = 0; s2[index]; index++)
s3[s3_index++] = s2[index];
s3[s3_index++] = '\0';
return (s3);
}
