#include "hash_tables.h"

/**
 * key_index - Get the index of the Key
 * @key: The key checked
 * @size: The size of the array.
 *
 * Return: The index
 *
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
