#include <stdlib.h>
#include "main.h"

/**
 ** _calloc - concatenate two strings up to n bytes.
 ** @nmemb: source string
 ** @size: string to truncate up to n bytes
 ** Return: pointer to new buffer
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int i = 0;
	unsigned int tam = nmemb * size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	pointer = malloc(tam);
	if (!pointer)
	{
		return (NULL);
	}
	for (i = 0; i < tam; i++)
	{
		pointer[i] = 0;
	}
	return (pointer);
}
