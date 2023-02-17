#include "main.h"
/**
 * _abs - This is a description
 * @c: input char
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _abs(int c)
{
	int c2;

	if (c > 0)
	{
		_putchar(c);
	}
	else if (c < 0)
	{
		c2 = c * -1;
		_putchar(c2);
	}
	else
	{
		_putchar('0');
	}
}
