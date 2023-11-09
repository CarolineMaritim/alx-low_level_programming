#include "lists.h"
/**
  *add_dnodeint - Adds new nod at beginning of list
  *@head: Pointer to list address
  *@n: Element to be added
  *Return: New elemnt or Null if failed
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current;

	/*allocate memory*/
	current = malloc(sizeof(dlistint_t));
	/*check for memory alloc errors*/
	if (current == NULL)
	{
		return (NULL);
	}

	current->n = n;
	current->prev = NULL;
	current->next = *head;
	/*check if its not empty*/
	if (*head != NULL)
	{
		(*head)->prev = current;
	}
	/*to preserve the link*/
	*head = current;

	return (current);
}
