#include "lists.h"
#include <string.h>
/**
 * add_node - Adds a new node at the beginning of a list
 * @head: First node/element
 * @str: String checked
 *
 * Return: Address of the new element, else Null
 */
list_t *add_node(list_t **head, const char *str)
{
int len;
char *duplicate;
list_t *current;
/*allocate memory to the new list*/
current = malloc(sizeof(list_t));
if (current == NULL)
{
	return (NULL);
}
duplicate = strdup(str);
if (duplicate == NULL)
{
	free(current);
	return (NULL);
}
for (len = 0; str[len]; len++)
current->str = duplicate;
current->len = len;
current->next = *head;
*head = current;
return (current);
}
