#include "search_algos.h"

/**
 * binary_search - unction that searches for a value in a sorted array of
 * integers using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: If value is not present in array or if array is NULL, your function
 * must return -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (array == NULL)
	{
		return (-1);
	}
	for (l = 0, r = size - 1; r >= l;)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		i = l + (r - l) / 2;
		if (array[i] == value)
		{
			return (i);
		}
		if (array[i] > value)
		{
			r = i - 1;
		}
		else
		{
			l = i + 1;
		}
	}
		return (-1);
}
