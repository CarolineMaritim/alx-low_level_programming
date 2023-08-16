#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Fetchs the right function to use.
 * @s: The operator.
 *
 * Return: A pointer to the function.
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
/*iterate through the operation array*/
while (ops[i].op != NULL && *(ops[i].op) != *s)
i++;
/*pointer to the op and func*/
return (ops[i].f);
}
