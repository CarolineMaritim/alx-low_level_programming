#include "lists.h"
#include <stdlib.h>
/**
 * free_list - Frees the list_t list
 * @head: Pointer to the list
 */
void free_list(list_t *head)
{
list_t *temp;
while (head)/*while head is not null*/
{
	temp = head->next;/*temp preservs cnctn for the next node*/
	free(head->str);
	free(head);
	head = temp;/*points to next node stored in temp*/
}
}
