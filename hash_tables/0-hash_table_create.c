#include "hash_tables.h"


/**
 * hash_table_create - this function creates a hashtable
 * @size: The size of the array
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 * Return: pointer to the hashtable
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int counter;

	if (size <= 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(size * sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (counter = 0; counter < size; counter++)
	{
		table->array[counter] = NULL;
	}
	return (table);

}
