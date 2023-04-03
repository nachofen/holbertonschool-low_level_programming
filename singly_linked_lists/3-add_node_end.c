#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "lists.h"
/**
 * add_node_end - this function return the pointer to new node added at the
 * end
 * @head: a pointer to head pointer
 * @str: the string to duplicate
 * Return: the number of nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *current = *head;


	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->str = strdup(str);
	tmp->len = strlen(str);
	if (*head == NULL)
	{
		*head = tmp;
		return (tmp->next);
	}
	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = tmp;


	return (current->next);
}
