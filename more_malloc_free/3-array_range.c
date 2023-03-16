#include <stdlib.h>
#include "main.h"

/**
 ** array_range - concatenate two strings up to n bytes.
 ** @min: source string
 ** @max: string to truncate up to n bytes
 ** Return: pointer to new buffer
 **/
int *array_range(int min, int max)
{
	int *pointer;
	unsigned int i = 0;

	unsigned int resto = max - min + 1;


	pointer = malloc(sizeof(int) * resto);
	if (!pointer)
	{
		return (NULL);
	}

	for (i = 0; i < resto; i++)
	{
		pointer[i] = min;
		min++;
	}
	return (pointer);
}
