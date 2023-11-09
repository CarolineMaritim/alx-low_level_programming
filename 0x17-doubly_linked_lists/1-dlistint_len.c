#include "lists.h"
/**
  *dlistint_len - Returns number of elements in a linked list
  *@h: Pointer to list address
  *Return: Number of elements
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
