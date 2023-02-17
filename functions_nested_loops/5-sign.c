#include "main.h"
/**
 * print_sign - This is a description
 * @c: input char
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int print_sign(int c)
{
	int size;

	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

	return (0);
}
