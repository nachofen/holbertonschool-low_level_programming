include "main.h"
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
		for (cone = 1; cone <= 9; cone++)
		{
			d = (row1 * col1);
			if (d >= 0)
			{
				_putchar((d / 10) + 48);
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + 48);
			if (col1 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
	}

}
