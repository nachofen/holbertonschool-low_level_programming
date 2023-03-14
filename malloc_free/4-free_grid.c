#include <stdlib.h>
#include "main.h"

/**
 * free_grid - A function that creates an array of chars,
 * and initializes it with a specific char.
 * @grid: The size of the array
 * @height: a
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
