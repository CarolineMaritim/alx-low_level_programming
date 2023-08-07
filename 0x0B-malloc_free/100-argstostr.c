#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concats all args to string separated by a new line.
 * @ac: Argument count.
 * @av: Argument array.
 *
 * Return: If ac is 0/ av is NULL/ the function fails - NULL.
 *         else - a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
char *strn;
int ag, byte, index;
int size = ac;
if (ac == 0 || av == NULL)
return (NULL);
for (ag = 0; ag < ac; ag++)
{
for (byte = 0; av[ag][byte]; byte++)
size++;
}
/*Reserve mem fr string add 1 to include null termtr*/
strn = malloc(sizeof(char) * size + 1);
if (strn == NULL)
return (NULL);
index = 0;
for (ag = 0; ag < ac; ag++)
{
for (byte = 0; av[ag][byte]; byte++)
strn[index++] = av[ag][byte];
strn[index++] = '\n';
}
strn[size] = '\0';
return (strn);
}
