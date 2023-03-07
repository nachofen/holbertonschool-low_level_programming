#include "main.h"
/**
 * _strchr - a function that print a string in reverse
 * @s: the char pointer
 * @c: the char to find
 * Return: a
 */
char *_strchr(char *s, char c)
{
	int contador = 0;

	while (s[contador])
	{
		if (s[contador] == c)
		{
			return (s + contador);
		}
		contador++;
	}
	if (c == '\0')
	{
		return (s + contador);
	}
	return (0);
}
