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
			if (s[contador] == '\0')
			{
				return (s + 1);
			}
			else
			{
				return (s + contador);
			}
		}
		contador++;
	}
	if (s[contador + 1] == '\0')
	{
		return (s + 1);
	}
	return (0);
}
