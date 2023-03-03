#include "main.h"
/**
 * _strchr - a function that print a string in reverse
 * @s: the char pointer
 * @c: the char to find
 * Return: a
 */
char *_strchr(char *s, char c)
{
	int contador = 0, conteo = 0;

	while (s[conteo])
	{
		conteo++;
	}
	while (s[contador])
	{
		if (s[contador] == c)
		{
			if (contador == conteo)
			{
				s = 0;
				return (s);
			}
			else
			{
				return (s + contador);
			}
		}
		contador++;
	}
	if (contador == conteo)
	{
		s = 0;
		return (s);
	}
	return (0);
}
