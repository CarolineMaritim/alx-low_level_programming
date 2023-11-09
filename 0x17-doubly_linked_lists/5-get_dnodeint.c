#include "lists.h"
/**
  *get_dnodeint_at_index - Gets node at a given index
  *@head: Pointer to the list address
  *@index: position checked
  *Return: Node or Null if it failed
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
