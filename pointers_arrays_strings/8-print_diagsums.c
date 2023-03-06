#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that print a string in reverse
 * @size: the size
 * @a: the char pointer to int
 */
void print_diagsums(int *a, int size)
{
	int contfil = 0, contcol = 0, sumadiag1 = 0, sumadiag2 = 0;

	for (; contfil < size; contfil++)
	{
		for (contcol = 0; contcol < size; contcol++)
		{
			if (contfil == contcol)
			{
				sumadiag1 = sumadiag1 + a[contfil * size + contcol];
			}
		}
	}
	contfil = 0;
	contcol = size - 1;
	for (; contfil < size; contfil++)
	{
			sumadiag2 = sumadiag2 + a[contfil * size + contcol];
			contcol--;
	}
	printf("%d, %d,\n", sumadiag1, sumadiag2);
}
