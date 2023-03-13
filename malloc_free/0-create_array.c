#include <stdlib.h>
#include "main.h"

/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: The size of the array
 * @c: A character to initialized the array
 * Return: Apointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *pointer = malloc(sizeof(char) * size);
	unsigned int i = 0;

	if (!pointer)
	{
		exit(1);
	}
	if (size == 0)
	{
		return (NULL);
	}
	for (; i < size; i++)
	{
		pointer[i] = c;
	}
	return (pointer);

}
