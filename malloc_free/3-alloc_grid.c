#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - A function that creates an array of chars,
 * and initializes it with a specific char.
 * @width: The size of the array
 * @height: a
 * Return: Apointer to the array or NULL if it fails
 */
int **alloc_grid(int width, int height)
{
	int **pointer;
	int **auxpointer;
	int cont1 = 0, cont2 = 0;

	pointer = malloc(sizeof(int *) * width);
	auxpointer = pointer;
	if (!pointer)
	{
		exit(1);
	}
	for (; cont1 < width; cont1++)
	{
		auxpointer[cont1] = malloc(sizeof(int) * height);
		if (auxpointer == NULL)
		{
			free(pointer);
			return (NULL);
		}

		for (; cont2 < height; cont2++)
		{
			pointer[cont1][cont2] = 0;
		}
	}
	return (pointer);
}
