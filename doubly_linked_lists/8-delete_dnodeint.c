#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - this function
 * end
 * @head: a pointer to head pointer
 * @index: the index
 * Return: the sum of n
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *recorredor = *head, *cleaner;


	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = recorredor->next;
		if (recorredor->next == NULL)
			return (-1);
		recorredor->next->prev = NULL;
		free(recorredor);
		return (1);
	}
	while (index != 1)
	{
		recorredor = recorredor->next;
		index--;
		if (recorredor->next == NULL)
		{
			return (-1);
		}
	}
	recorredor->prev->next = recorredor->next;
	if (recorredor->next != NULL)
		recorredor->next->prev = recorredor->prev;
	if (recorredor->next == NULL)
	{
		cleaner = recorredor->prev;
		cleaner->next = NULL;
		free(recorredor);
		return (1);
	}
	free(recorredor);

	return (1);
}
