#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - functions that sum integers
 * @n: the number of elements
 * Return: an integer that is the sum of all integers
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int res = 0;
	va_list numbers;

	if (n == 0)
	{
		return (0);
	}
	va_start(numbers, n);
	for (; i < n; i++)
	{
		res = res + (va_arg(numbers, int));
	}
	va_end(numbers);
	return (res);
}
