#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - functions that print strings followed by a string separator
 * @n: the number of elements
 * @separator: the pointer to the separator
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list numbers;

	va_start(numbers, n);
	for (; i < n; i++)
	{
		char *aux = va_arg(numbers, char *);

		if (aux == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", aux);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(numbers);
}
