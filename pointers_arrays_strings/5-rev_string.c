#include "main.h"
/**
 * rev_string - a function that print a string in reverse
 * @s: the char pointer
 */
void rev_string(char *s)
{
	int i = 0, length = 0;
	char aux;

	while (s[i] != '\0')
	{
		i++;
	}
	for (; length < i / 2; length++)
	{
		aux = s[length];
		s[length] = s[i - length - 1];
		s[i - length - 1] = aux;

	}
}
