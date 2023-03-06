#include "main.h"
int _busquedaimplacable(int test, int cuadrado);
/**
 * _sqrt_recursion - a function that prints a string in reverse.
 * @n: An input int
 * Return: Nothing
 */

int _sqrt_recursion(int n)
{
	return (_busquedaimplacable(1, n));
}

/**
 * _busquedaimplacable - a function that prints a string in reverse.
 * @test: An input int
 * @cuadrado:
 * Return: Nothing
 */
int _busquedaimplacable(int test, int cuadrado)
{
	if (test > cuadrado)
	{
		return (-1);
	}
	else if (test * test == cuadrado)
	{
		return (test);
	}
	return (_busquedaimplacable(test + 1, cuadrado));
}
