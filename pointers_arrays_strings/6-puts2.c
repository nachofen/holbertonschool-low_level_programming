#include "main.h"
/**
 * puts2 - a function that print a string in reverse
 * @str: the char pointer
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		i++;
	}
	_putchar('\n');
}
