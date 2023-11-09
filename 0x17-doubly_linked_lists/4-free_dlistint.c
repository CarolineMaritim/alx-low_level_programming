#include "lists.h"
/**
  *free_dlistint - Fress list
  *@head: Pointer to the list address
  */
void free_dlistint(dlistint_t *head)
{
	/*create a temporary storage to preserve link*/
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
