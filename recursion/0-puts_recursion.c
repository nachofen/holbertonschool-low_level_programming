#include "main.h"
/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: An input string to printing
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
		_putchar(10);
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
