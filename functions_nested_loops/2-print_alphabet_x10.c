#include "main.h"
/**
 * print_alphabet_x10 - This is a description
 *
 */
void print_alphabet_x10(void)
{
int i;

char c;

	for (i = 0; i < 10; i++)
	{
		_putchar('\n');
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	}
}
