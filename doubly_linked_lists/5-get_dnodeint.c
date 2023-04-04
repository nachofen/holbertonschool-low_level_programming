#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - this function return the pointer to 9th node
 * end
 * @head: a pointer to head pointer
 * @index: the node index
 * Return: the number of nodes
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (temp != NULL && index != count)
	{
		temp = temp->next;
		count++;
	}
		if (count == index)
		{
			return (temp);
		}
		else
		{
			return (NULL);
		}
}
