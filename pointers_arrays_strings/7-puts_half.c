#include "main.h"
/**
 * puts_half - a function that tells the length of a string
 * @str: the char pointer
 */
void puts_half(char *str)
{
	int i = 0, med = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		med = i / 2;
	}
	else
	{
		med = ((i - 1) / 2);
	}
	for (; med < i; med++)
	{
		_putchar(str[med]);
	}
	_putchar('\n');
}
