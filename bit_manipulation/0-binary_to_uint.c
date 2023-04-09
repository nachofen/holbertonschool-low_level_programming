#include "main.h"

/**
 * _strlen - calculates the length of the string
 * @s: input
 * Return: length of string
 */
unsigned int _strlen(const char *s)
{
	unsigned int i;

	while (s[i])
	{
		i++;
	}

	return (i);
}

/**
 * binary_to_uint - converts a string of binaries to a decimal number
 * @b: string to convert
 * Return: the decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0, exp = 1, tmp = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	for (i = _strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		tmp = b[i] + '0';
		total = total + (tmp * exp);
		exp = exp * 2;
	}
	return (total);
}
