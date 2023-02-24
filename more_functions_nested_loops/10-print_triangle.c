#include "main.h"
#include <stdio.h>
/**
 * print_triangle - A function that draws a triangle
 * @size: draws n times
 */
void print_triangle(int size)
{
	int i, j, esp;

	esp = size - 1;

	if (size <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
			{
				if (i < esp)
					_putchar (' ');
				else
					_putchar (35);
			}
			esp--;
			_putchar ('\n');
		}
	}
}
