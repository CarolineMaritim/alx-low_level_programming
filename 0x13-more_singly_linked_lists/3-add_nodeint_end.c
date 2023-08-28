#include "lists.h"
/**
 * add_nodeint_end - Adds elements to the tail of lists
 * @head: Pointer to the pointer of head of the list
 * @n:  Number of elements
 *
 * Return: Address of new element, else Null
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *link, *end;

link = malloc(sizeof(listint_t));/*allocate memory*/

if (link == NULL)
	return (NULL);
link->n = n;
link->next = NULL;

if (*head == NULL)
{
*head = link;
}
else
{
	end = *head;
	while (end->next != NULL)/*check if NULL*/
		end = end->next;
	end->next = link;/*as usual to preserve the link*/
}
return (*head);
}
