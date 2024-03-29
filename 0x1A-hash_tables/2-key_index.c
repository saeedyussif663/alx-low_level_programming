#include "hash_tables.h"

/**
 * key_index - Get the index
 * @key: The key
 * @size: The size
 * Return: The index of the key.
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}