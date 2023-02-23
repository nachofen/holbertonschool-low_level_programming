#include "main.h"
#include <stdio.h>
/**
 * more_numbers - A function that multiplies two integers
 */
void more_numbers(void)
{
	int i1, i2;

	for (i1 = 0; i1 < 10; i1++)
	{
		for (i2 = 0; i2 <= 14; i2++)
		{
			if (i2 / 10 != 0)
			{
				_putchar((i2 / 10) + 48);
			}
				_putchar((i2 % 10) + 48);
		}
	_putchar ('\n');
	}
}
