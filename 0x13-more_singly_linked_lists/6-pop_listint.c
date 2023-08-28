#include "lists.h"
/**
 * pop_listint - Deletes the head node
 * @head: Pointer to a pointer of the list
 *
 * Return: Head node data n else 0
 */
int pop_listint(listint_t **head)
{
listint_t *link;
int value;

if (*head == NULL)
return (0);
/*condition to when list is empty*/
link = (*head)->next;
value = (*head)->n;
*head = (*head)->next;
free(link);

return (value);
}
