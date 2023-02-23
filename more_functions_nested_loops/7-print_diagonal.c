#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - A function that draws
 * @n: draws n times
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 1; j < i; j++)
			{
			_putchar (' ');
			}
			_putchar (92);
			_putchar ('\n');
		}
	}
}
