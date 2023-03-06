#include "main.h"
int _cousinfinder(int num, int divisor);
/**
 * is_prime_number - a function that prints a string in reverse.
 * @n: An input int
 * Return: Nothing
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
	{
		return (0);	
	}
	if (n <= 3)
	{
		return(1);
	}
	return (_cousinfinder(n, div));
}

/**
 * _cousinfinder - a function that find if its divisible
 * @num: An input int
 * @divisor: asadsad
 * Return: Nothing
 */
int _cousinfinder(int num, int divisor)
{
	if (divisor == num / 2)
	{
		return (1);
	}
	if (num % divisor == 0)
	{
		return (0);
	}
	return (_cousinfinder(num ,divisor + 1));
}
