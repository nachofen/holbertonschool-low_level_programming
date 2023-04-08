#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - this function
 * end
 * @h: a pointer to head pointer
 * @idx: the index
 * @n: the new value of n
 * Return: the sum of n
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *recorredor = *h;
	dlistint_t *nuevo = NULL;

	nuevo = malloc(sizeof(dlistint_t));
	if (nuevo == NULL)
	{
		return (NULL);
	}
	nuevo->n = n;
	if (h == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (idx != 1)
	{
		recorredor = recorredor->next;
		idx--;
		if (recorredor == NULL)
		{
			return (NULL);
		}

	}
	if (recorredor->next == NULL)
		return (add_dnodeint_end(h, n));

	nuevo->next = recorredor->next;
	nuevo->prev = recorredor;
	recorredor->next->prev = nuevo;
	recorredor->next = nuevo;

	return (nuevo);
}
