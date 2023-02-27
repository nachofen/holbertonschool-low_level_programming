#include "main.h"
/**
 * swap_int - a function that swap the value of two integers
 * @a: An integer
 * @b: the other integer
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;

	*a = *b;

	*b = c;
}
