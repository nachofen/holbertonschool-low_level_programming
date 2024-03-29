#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "lists.h"
/**
 * free_list - this function return the pointer to new node added at the
 * end
 * @head: a pointer to head pointer
 * Return: the number of nodes
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
