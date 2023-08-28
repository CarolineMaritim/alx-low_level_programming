#include "lists.h"
/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the address.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *first, *tail;

/*Check if the input is valid*/
if (head == NULL || *head == NULL)
return (NULL);

tail = NULL;/*assign tail pointer to NULL*/

while ((*head)->next != NULL)
{
first = (*head)->next;
(*head)->next = tail;
tail = *head;
*head = first;
}

(*head)->next = tail;/*Set next pointer to last node*/

return (*head);
}

