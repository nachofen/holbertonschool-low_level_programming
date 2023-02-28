#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that tells the length of a string
 * @a: the char pointer
 * @n: the int
 */
void print_array(int *a, int n)
{
	int aux = 0;

	while (a[n] != '\0')
	{
		n++;
	}
	for (; aux < n; aux++)
	{
		if (aux < n)
		{
			printf("%d, ", a[aux]);
		}
		else
		{
			printf("%d", a[aux]);
		}
	}
	printf("\n");
}
