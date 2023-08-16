#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Calculates given operations.
 * @argc: Argument count.
 * @argv: Argument vector, array.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
/*we told the compiler that we have an unused parameter*/
int A;
int B;
char *op;
/*arguments should be 4*/
if (argc != 4)
{
printf("Error\n");
exit(98);
}
/*assign arguments and convert to int for operations*/
A = atoi(argv[1]);
op = argv[2];
B = atoi(argv[3]);
/*check if the operations are given*/
if (get_op_func(op) == NULL || op[1] != '\0')
{
printf("Error\n");
exit(99);
}
/*check if user divide by 0*/
if ((*op == '/' && B == 0) ||
(*op == '%' && B == 0))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(op)(A, B));
return (0);
}
