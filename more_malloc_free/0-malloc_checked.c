#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - a function that print a string in reverse
 * @b: the char pointer
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *pointer = malloc(b);

	if (!pointer)
	{
		exit(98);
	}

	return (pointer);
}
