#include "lists.h"
/**
  *add_dnodeint_end - Adds node to end of list
  *@head: Pointer to the list address
  *@n: ELement to be added
  *Return: Address to new Element if success else NULL
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *cur, *end;

	/*memory allocation*/
	cur = malloc(sizeof(dlistint_t));
	/*check for mem alloc errors*/
	if (cur == NULL)
	{
		return (NULL);
	}
	cur->n = n;
	cur->next = NULL;
	/*check if list is empty*/
	if (*head == NULL)
	{
		cur->prev = NULL;
		*head = cur;
		return (NULL);
	}
	end = *head;
	while (end->next != NULL)
		end = end->next;
	end->next = cur;
	cur->prev = end;

	return (cur);
}
