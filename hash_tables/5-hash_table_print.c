#include "hash_tables.h"


/**
 * hash_table_print - this function retreives a value associated with a key
 * @ht: hashtable to print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	int notfirst;
	hash_node_t *tmp;

	if (ht == NULL)
		return;
	printf("{");
	for (index = 0, notfirst = 0; index < ht->size; index++)
	{
		tmp = ht->array[index];
		if (tmp != NULL)
		{
			if (notfirst == 1)
				printf(",");
			printf("'%s' : '%s'", tmp->key, tmp->value);
			while ((tmp = tmp->next) != NULL)
			{
				printf(", ");
				printf("'%s' : '%s'", tmp->key, tmp->value);
			}
			notfirst = 1;

		}
	}
	printf("}\n");
}
