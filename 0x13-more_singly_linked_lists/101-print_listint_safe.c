#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint_safe - Prints elements in a list safely
 * @head: Pointer to the list
 *
 * Return: Number of Nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t val = 0;
const listint_t *new = head;
const listint_t *link = NULL; /* Pointer to the start of detected loop*/

while (new != NULL)
{
printf("[%p] %d\n", (void *)new, new->n);
/*Check for a loop*/
if (new > new->next || new->next == link)
{
if (link == NULL)
link = new;
else if (new->next == link)
break; /* We have printed the loop*/
val++;
new = new->next;/*link to the next node*/
}
else
{
exit(98); /* Exit with status 98*/
}
}
return (val);
}
