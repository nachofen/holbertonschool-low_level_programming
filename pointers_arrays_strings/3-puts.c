#include "main.h"
/**
 * _puts - a function that tells the length of a string
 * @str: the char pointer
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
