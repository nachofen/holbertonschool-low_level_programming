#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that tells the length of a string
 * @a: the char pointer
 * @n: the int
 */
void print_array(int *a, int n)
{
	int aux;

	for (aux = 0; aux < n; aux++)
	{
		printf("%d", a[aux]);
		if (aux < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
