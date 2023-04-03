#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_dlistint - this function prints all the elements of a doubly
 * linked list
 * @h: the structure
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

		while (h != NULL)
		{
			printf("%d\n", h->n);
			counter++;
			h = h->next;
		}
	return (counter);
}
