#include "main.h"
/**
 * _puts - a function that tells the length of a string
 * @str: the char pointer
 */
void _puts(char *str)
{
	int cont = 0;
	for (; str[cont]; cont++)
	{
		_putchar(cont);
	}
	_putchar('\n');
}
