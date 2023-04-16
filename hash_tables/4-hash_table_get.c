#include "hash_tables.h"


/**
 * hash_table_get - this function retreives a value associated with a key
 * @ht: hashtable to add into
 * @key: The key
 * Return: value associated with the element or NULL if key coudnt be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	if (tmp == NULL)
		return (NULL);
	while (strcmp(tmp->key, key) != 0)
	{
		tmp = tmp->next;
	}
	if (tmp == NULL)
		return (NULL);

	return (tmp->value);

}
