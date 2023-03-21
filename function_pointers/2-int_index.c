#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * int_index - print the name
 * @array: name to print
 * @size: function to use
 * @cmp: s
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int cont = 0;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (; cont < size; cont++)
		{
			if (cmp(array[cont]) != 0)
			{
				return (cont);
			}
		}
	}
	return (0);
}
