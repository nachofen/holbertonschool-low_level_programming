#include "main.h"
/**
 * factorial - a function that prints a string in reverse.
 * @n: An input int
 * Return: Nothing
 */

int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	{
		return (n * factorial(n - 1));
	}
}
