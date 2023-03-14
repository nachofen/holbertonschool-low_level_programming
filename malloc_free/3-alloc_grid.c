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
	int cont1 = 0, cont2 = 0, nonull = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	pointer = malloc(sizeof(int *) * width);
	if (!pointer)
	{
		return (NULL);
	}
	for (; cont1 < width; cont1++)
	{
		pointer[cont1] = malloc(sizeof(int) * width);
		if (pointer[cont1] == NULL)
		{
			for (cont1 = 0; cont1 < nonull; cont1++)
			{
				free(pointer[cont1]);
			}
				free(pointer);
				return (NULL);
		}
		nonull++;
		for (cont2 = 0; cont2 < height; cont2++)
		{
			pointer[cont1][cont2] = 0;
		}
	}
	return (pointer);
}
