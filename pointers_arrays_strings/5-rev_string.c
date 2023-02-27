#include "main.h"
/**
 * rev_string - a function that print a string in reverse
 * @s: the char pointer
 */
void rev_string(char *s)
{
	int i = 0, length = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
	for (length = i - 1; length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
