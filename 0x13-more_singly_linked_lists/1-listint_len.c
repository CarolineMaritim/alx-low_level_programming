#include "lists.h"
/**
 * listint_len - Returns number of elements in a list
 * @h: pointer to dtruct node
 *
 * Return: Number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t elements;

	elements = 0;

	while (h)
	{
	elements++;
	h = h->next;/*to preserve the link*/
	}
return (elements);
}
