#include "lists.h"
#include <stdio.h>
/**
 * print_list - Prints all the elements in a list
 * @h: The list
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
/*n is nodes*/
size_t n = 0;
/*loop through as long as h->str != null*/
while (h)
{
	if (h->str == NULL)
		printf("[0] (nil)");
	else
		printf("[%d] %s\n", h->len, h->str);
	n++;
	h = h->next;/*move to next node*/
}
return (n);
}
