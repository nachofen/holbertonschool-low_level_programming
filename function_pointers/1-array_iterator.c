#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - print the name
 * @array: name to print
 * @size: function to use
 * @action: s
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int cont = 0;

	if (size != NULL && action != NULL)
	{
		for (; cont < size; cont++)
		action(array[cont]);
	}

}

