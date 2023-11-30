#include "hash_tables.h"

/**
 * hash_table_create - Function that Creates a hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the new hash table else NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable;
	unsigned long int i;

/*Allocate memory*/
	hashtable = malloc(sizeof(hash_table_t));
	if (hashtable == NULL)
		return (NULL);/*malloc error*/


	hashtable->size = size;
	hashtable->array = malloc(sizeof(hash_node_t *) * size);
	if (hashtable->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		hashtable->array[i] = NULL;

	return (hashtable);
}
