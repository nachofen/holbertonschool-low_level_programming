#include "main.h"

/**
 * binary_to_uint - converts a string of binaries to a decimal number
 * @b: string to convert
 * Return: the decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;
	int i = 0, length = 0;

	if (b == NULL)
		return (0);

	while (b[length])
		length++;

	for (i = 0; i < length ; i++)
	{
		if (b[i] == '0')
			total = total * 2;
		else if (b[i] == '1')
			total = total * 2 + 1;
		else
			return (0);

	}
	return (total);
}
