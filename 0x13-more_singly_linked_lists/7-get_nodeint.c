#include "lists.h"
/**
 * get_nodeint_at_index - Return nth node of a list.
 * @head: Pointer to a pointer of the list
 * @index: Index of the node
 *
 * Return: Node ata index , else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int value;

/*for loop to itterate through the elements*/
for (value = 0; value < index; value++)
{
	if (head == NULL)
	return (NULL);
	head = head->next;
}
	return (head);
}
