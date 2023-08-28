#include "lists.h"
/**
 * free_listint2 - Frees a list
 * @head: pointer to a pointer to list
 */
void free_listint2(listint_t **head)
{
listint_t *link;
/*check if head is null*/
if (*head == NULL)
return;
while (*head)
{
	link = (*head)->next;
	free(*head);
	*head = link;/*preserve the link*/
}
head = NULL;
}
