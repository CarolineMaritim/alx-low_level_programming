#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts new node to a given position
 * @head: Pointer to address of list
 * @idx: Index where the new node will be added
 * @n: The node to be added.
 *
 * Return: Address of new node else NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *link;
listint_t *copy = *head;
unsigned int val;

link = malloc(sizeof(listint_t));
/*Check if new address returns*/
if (link == NULL)
	return (NULL);
link->n = n;

/*Return the address*/
if (idx == 0)
{
	link->next = copy;
	*head = link;/*to preserve the link*/
	return (link);
}
for (val = 0; val < idx - 1; val++)
{
/*check if it's possible to add new node*/
	if (copy == NULL || copy->next == NULL)
	{
		free(link);
		return (NULL);
	}
	copy = copy->next;
}
link->next = copy->next;
copy->next = link;

return (link);
}
