#include "lists.h"
/**
 * list_len - Returns number of elements in a linked list
 * @h: Linked list checked
 *
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
size_t nodes = 0;
for (; h; h = h->next)
{
	nodes++;
}
return (nodes);
}
