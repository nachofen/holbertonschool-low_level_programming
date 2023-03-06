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
		return (0);
	}
	_strlen_recursion(s + 1);
	return (1 + _strlen_recursion(s + 1));
}
