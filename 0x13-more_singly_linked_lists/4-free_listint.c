#include "lists.h"
/**
 * free_listint - Frees the list
 * @head: Pointer to the list checked
 */
void free_listint(listint_t *head)
{
listint_t *link;

while (head)
{
link = head->next;
free(head);
head = link;/*after freeing head preserve link */
}
}
