#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - this function count the number of nodes
 * @h: the structure
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

		while (h != NULL)
		{
			counter++;
			h = h->next;
		}
	return (counter);
}
