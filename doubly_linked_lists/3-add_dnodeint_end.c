#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "lists.h"
/**
 * add_dnodeint_end - this function return the pointer to new node added at the
 * end
 * @head: a pointer to head pointer
 * @n: the valur of new n node
 * Return: the number of nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *aux = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	while (aux->next != NULL)
	{
		aux = aux->next;
	}

	new->n = n;
	new->prev = aux;
	new->next = NULL;
	aux->next = new;

	return (aux->next);
}
