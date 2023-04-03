#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - this function prints the content of str and count the number of
 * nodes
 * @h: the structure
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

		while (h != NULL)
		{
			if (h->str == NULL)
			{
				printf("[0] (nil)\n");
			}
			else
			{
				printf("[%d]%s\n", h->len, h->str);
			}
			counter++;
			h = h->next;
		}
	return (counter);
}
