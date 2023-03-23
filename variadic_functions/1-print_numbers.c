#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - functions that print number followed by a string
 * @n: the number of elements
 * @separator: the pointer to the separator
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list numbers;

	va_start(numbers, n);
	for (; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(numbers);
}
