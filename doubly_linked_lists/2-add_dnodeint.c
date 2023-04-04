#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "lists.h"
/**
 * add_dnodeint - this function return the pointer to new node added at the
 * beginning
 * @head: a pointer to head pointer
 * @n: the valur of new n node
 * Return: the number of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	tmp = malloc(sizeof(dlistint_t));

	if (tmp == NULL)
	{
		return (NULL);
	}

	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = *head;

	if (*head)
	{
		(*head)->prev = tmp;
	}
	*head = tmp;

	return (*head);
}
