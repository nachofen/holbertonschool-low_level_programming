#include "main.h"
/**
 *  * times_table -  a function that prints the 9 times table, starting with 0
 *  r = row1 * col1
 */
void times_table(void)
{
	int row1, col1, r;

	for (row1 = 0; row1 <= 9; row1++)
	{
	_putchar('0');
	_putchar(',');
	_putchar(' ');
		for (col1 = 1; col1 <= 9; col1++)
		{
			r = (row1 * col1);
			if (r >= 10)
			{
				_putchar((r / 10) + 48);
			}
			else
			{
				_putchar(' ');
			}
			_putchar((r % 10) + 48);
			if (col1 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
	}

}
