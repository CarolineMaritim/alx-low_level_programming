#include "lists.h"
#include <string.h>
/**
 * add_node_end - Adds node/element to the end of the list
 * @head: Head of the list
 * @str: String being checked
 *
 * Return: Address of new node else Null
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *tail;
char *d;
int len;
/*allocate memory to the new list*/
new = malloc(sizeof(list_t));
if (new == NULL)
	return (NULL);
d = strdup(str);
if (str == NULL)
{
	/*free memory and return NULL*/
	free(new);
	return (NULL);
}
for (len = 0; str[len]; len++)
new->next = NULL;
new->str = d;
new->len = len;
if (*head == NULL)
	*head = new;
	else
{
	tail = *head;
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = new;
}
return (*head);
}
