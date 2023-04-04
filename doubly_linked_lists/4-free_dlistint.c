#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "lists.h"
/**
 * free_dlistint - this function return the pointer to new node added at the
 * end
 * @head: a pointer to head pointer
 * Return: the number of nodes
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
