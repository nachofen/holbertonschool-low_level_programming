#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - A function that multiplies two integers
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 50 && i != 52)
		{
		_putchar (i);
		}
	}
	_putchar ('\n');
}
