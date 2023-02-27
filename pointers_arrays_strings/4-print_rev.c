#include "main.h"
/**
 * print_rev - a function that print a string in reverse
 * @s: the char pointer
 */
void print_rev(char *s)
{
	int i = 0, length = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (length = i; length >= 0; length--)
	{
		_putchar(s[length]);
	}
}
