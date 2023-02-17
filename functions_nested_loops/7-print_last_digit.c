#include "main.h"
/**
 * print_last_digit - This is a description
 * @c: input char
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int print_last_digit(int c)
{
	int lastnum;

	lastnum = c % 10;

	if (c < 0)
	{
		lastnum = lastnum * -1;
	}
	_putchar (lastnum + 48);

	return (lastnum);
}
