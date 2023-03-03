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
	char *puntero = s;

	while (s[contador])
	{
		if (s[contador] == c)
		{
			return (puntero);
		}
		else
		{
			return ("NULL");
		}
		contador++;
	}
	return (0);
}
