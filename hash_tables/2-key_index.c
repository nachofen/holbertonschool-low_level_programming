#include "hash_tables.h"


/**
 * key_index - this function creates a hashtable
 * @size: The size of the array
 * @key: the key
 * Return: pointer to the hashtable
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = (hash_djb2(key) % size);

	return (index);

}
