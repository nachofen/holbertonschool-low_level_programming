#include "hash_tables.h"
/**
 * hash_table_delete - this function delete given hashtable
 * @ht: hashtable to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *tmp, *backup;

	if (ht == NULL)
		return;
	for (index = 0; index < ht->size; index++)
	{
		tmp = ht->array[index];
		if (tmp != NULL)
		{
			backup = tmp;
			tmp = tmp->next;
			free(backup->key);
			free(backup->value);
			free(backup);
		}
	}
	free(ht->array);
	free(ht);
}
