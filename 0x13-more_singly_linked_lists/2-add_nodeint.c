#include "lists.h"
/**
 * add_nodeint - Adds node to the head of the list
 * @head: Head of the list
 * @n: Node to be added
 *
 * Return: Address of new element, else NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *link;

link = malloc(sizeof(listint_t));

if (link == NULL)
	return (NULL);
link->n = n;
link->next = *head;
*head = link;/*always preserve the link*/

return (link);
}
