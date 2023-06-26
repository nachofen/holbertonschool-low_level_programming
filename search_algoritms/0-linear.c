#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of
 * integers using the Linear search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: If value is not present in array or if array is NULL, return -1.
 */
int linear_search(int *array, size_t size, int value)
{
	int count;

	if (array == NULL)
		return (-1);
	for (count = 0; count < (int)size; count++)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[count] == value)
			return (count);
	}
	return (-1);
}
