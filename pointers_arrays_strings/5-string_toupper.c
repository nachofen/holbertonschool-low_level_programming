#include "main.h"
/**
 * string_toupper - a function that print a string in reverse
 * @asterisco: the char pointer
 * Return: a
 */
char *string_toupper(char *asterisco)
{
	int length = 0;

	while (asterisco[length])
	{
		if (asterisco[length] >= 'a' && asterisco[length] <= 'z')
		{
			asterisco[length] = asterisco[length] - 32;
		}
		length++;
	}
	return (asterisco);
}
