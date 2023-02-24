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
		for (i = 1; i < size; i++)
		{
			for (j = 1; j < size; j++)
			{
			_putchar (35);
			}
			_putchar (35);
			_putchar ('\n');
		}
	}
}
