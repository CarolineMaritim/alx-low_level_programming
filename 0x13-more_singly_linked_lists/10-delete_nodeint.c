#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes node at index
 * @head: Pointer to the adress
 * @index: Index of the node
 *
 * Return: 1 if success else -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *link;
listint_t *dup = *head;
unsigned int val;

if (dup == NULL)
	return (-1);
if (index == 0)
{
	*head = (*head)->next;
	free(dup);/*free dup memory*/
	return (1);
}
/*tranverse through the elements*/
for (val = 0; val < index - 1; val++)
{
	if (dup->next == NULL)
		return (-1);
	dup = dup->next;/*move to the next node*/
}
link = dup->next;/*assign current node to the next node*/
dup->next = link->next;/*link duplicate node to current node*/
free(link);
return (-1);
}
