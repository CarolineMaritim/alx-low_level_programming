#include "lists.h"
/**
  *print_dlistint - Prints all elements of the named list
  *@h: Pointer to the node
  *Return: Number of nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		printf("%d\n", h->n);
		/*preserve the link*/
		h = h->next;
	}
	return (elements);
}
