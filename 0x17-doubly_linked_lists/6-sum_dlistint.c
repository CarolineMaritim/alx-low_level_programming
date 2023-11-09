#include "lists.h"
/**
  *sum_dlistint - Sums up all data of a list
  *@head: Pointer to list addrss
  *Return: Sum else 0
  */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
