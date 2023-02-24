#include "main.h"
#include <stdio.h>
/**
 * print_square - A function that draws a square
 * @size: draws n times
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - 1; j++)
			{
			_putchar (35);
			}
			_putchar (35);
			_putchar ('\n');
		}
	}
}
