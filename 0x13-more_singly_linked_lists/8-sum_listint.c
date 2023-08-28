#include "lists.h"
/**
 * sum_listint - Returns sum of all data in list
 * @head: Pointer to the list
 *
 * Return: If empty 0, else sum.
 */
int sum_listint(listint_t *head)
{
	int sum;
	int value;

	sum = 0;
	value = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		value = head->n;
		sum += value;
		head = head->next;
	}
	return (sum);
}
