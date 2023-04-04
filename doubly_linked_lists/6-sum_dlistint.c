#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "lists.h"
/**
 * sum_dlistint - this function makes the sum of n
 * end
 * @head: a pointer to head pointer
 * Return: the sum of n
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int count = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		count = count + head->n;
		head = head->next;
	}
	return (count);
}
