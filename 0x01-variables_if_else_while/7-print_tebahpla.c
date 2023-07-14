#include <stdio.h>
/**
 * main - pogram the prints alphabet in reverse
 *
 * Return: 0 (Success)
 *
*/
int main(void)
{
char alphabet;
for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
putchar(alphabet);
putchar('\n');
return (0);
}
