#include "main.h"



void _puts_recursion(char *s)
{
	if (*s == '\n')
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(s+1);
}
