#include "main.h"
int find_root(int num,int root);
int _sqrt_recursion(int n);
/**
 * find_root - Finds root
 * * @root: Root number
 * @num: Number checked
 *
 * Return: if n does not have a sqroot. -1
 */
int find_root(int num,int root)
{
if (root * root == num)
return (root);
if (root == num / 2)
return (-1);
return (find_root(num, root + 1));
}
/**
 * _sqrt_recursion - Returns sqroot of a number
 * @n: Number checked
 *
 * * Return: if n does not have a sqroot. -1
 */
int _sqrt_recursion(int n)
{
int root = 0;
if (n < 0)
return (-1);
if (n == 1)
return (1);
return (find_root(n, root));
}
