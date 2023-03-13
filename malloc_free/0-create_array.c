#include <stdlib.h>
#include "main.h"

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
