#include "main.h"
/**
 * reverse_array - a function that revesre the content of array of integers
 * @a: the char pointer
 * @n: a
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int aux = 0;

	while (i < n)
	{
		aux = a[n - 1];
		a[n - 1] = a[i];
		a[i] = aux;
		i++;
		n--;
	}
}
