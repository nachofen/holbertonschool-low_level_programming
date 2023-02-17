#include "main.h"
/**
 * jack_bauer - This is a description
 *
 */
void jack_bauer(void)
{
	int ht;

	int min;

	for (ht = 0; ht < 24; ht++)
	{

		for (min = 0; min < 60; min++)
		{
			_putchar((ht / 10) + 48);
			_putchar((ht % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
