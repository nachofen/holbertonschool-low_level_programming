#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "lists.h"
/**
 * add_node - this function return the pointer to new node added at the
 * beginning
 * @head: a pointer to head pointer
 * @str: the string to duplicate
 * Return: the number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	tmp = malloc(sizeof(list_t));
	tmp->str = strdup(str);
	tmp->len = strlen(str);

	tmp->next = *head;
	*head = tmp;


	return (*head);
}
