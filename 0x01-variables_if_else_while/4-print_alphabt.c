#include <stdio.h>
/**
 * main - pogram the prints alphabet in lowercase
 *
 * Return: 0 (Success)
 *
*/
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet != 'e' && alphabet != 'q')
	putchar(alphabet);
}
putchar('\n');
return (0);
}
