#include "lists.h"
size_t lopped_list(listint_t *head);
size_t free_listint_safe(listint_t **h);
/**
 * lopped_list - Counts elements in a list.
 * @head: A pointer to the list.
 *
 * Return: If the list is not looped 0, else elements.
 */
size_t lopped_list(listint_t *head)
{
listint_t *last, *lead;

size_t elements = 0;
/*check if ther is any loop*/
if (head == NULL || head->next == NULL)
return (0);
/*link the last to head*/
lead = head->next;
last = (head->next)->next;/*link lead to the tail of head*/

while (last)
{
if (lead == last)
{
lead = head;
while (lead != last)
{
elements++;
lead = lead->next;
last = last->next;
}
lead = lead->next;
while (lead != last)
{
elements++;
lead = lead->next;
}
return (elements);
}
lead = lead->next;
last = (last->next)->next;
}
return (0);
}

/**
 * free_listint_safe - Frees a listint_t list safely
 * @h: A pointer to the address list
 *
 * Return: The size of the list
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *new;
size_t elements, index;

elements = lopped_list(*h);

if (elements == 0)
{
for (; h != NULL && *h != NULL; elements++)
{
new = (*h)->next;
free(*h);
*h = new;/*preserve the link*/
}
}
else
{
for (index = 0; index < elements; index++)
{
new = (*h)->next;
free(*h);
*h = new;
}
*h = NULL;
}
h = NULL;
return (elements);
}
