#include "lists.h"
/**
 *insert_dnodeint_at_index - Inserts new node at a given index
 *@h: Pointer to the list
 *@idx: Index checked
 *@n: Element to be added
 *Return: Address to the new node , else NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *t = *h, *cur;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		t = t->next;
		if (t == NULL)
			return (NULL);
	}

	if (t->next == NULL)
		return (add_dnodeint_end(h, n));

	cur = malloc(sizeof(dlistint_t));
	if (cur == NULL)
		return (NULL);

	cur->n = n;
	cur->prev = t;
	cur->next = t->next;
	t->next->prev = cur;
	t->next = cur;

	return (cur);
}
