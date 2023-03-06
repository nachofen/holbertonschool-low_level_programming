#include "main.h"
/**
 * _strlen_recursion - a function that prints a string in reverse.
 * @s: An input string to printing
 * Return: Nothing
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_puts_recursion(s + 1);
	_putchar(*s);
}
