#include "lists.h"
#include <stdio.h>
/**
 * print_listint - Prints all elements in list
 * @h: Pointer to the list
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node;
	node = 0;

	while (h)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}
return (node);
}
