#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the opcodes.
 * @argc: Argument count.
 * @argv: Array of arguments passed.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int bytes;
int i;
/*Pointer to a function that takes two args*/
int (*main_ptr)(int, char **) = main;
unsigned char opcode;
/*Check the number of arguments passed*/
if (argc != 2)
{
printf("Error\n");
exit(1);
}
/*convert bytes given to integer*/
bytes = atoi(argv[1]);
/*Check if value is negative*/
if (bytes < 0)
{
printf("Error\n");
exit(2);
}
/*iterate through byte times and read opcode at main_ptr*/
for (i = 0; i < bytes; i++)
{
opcode = *(unsigned char *)main_ptr;
printf("%.2x", opcode);
/*Print space after opcode and ends if it's the last one*/
if (i == bytes - 1)
continue;
printf(" ");
main_ptr++;
}
printf("\n");
return (0);
}
