#include "main.h"
/**
 * rev_string - Reverses a string.
 * @s: String checked
 */
void rev_string(char *s)
{
int len = 0;
int index = 0;
char x;
while (s[index++])
len++;
for (index = len - 1; index >= len / 2; index--)
{
x = s[index];
s[index] = s[len - index - 1];
s[len - index - 1] = x;
}
}
