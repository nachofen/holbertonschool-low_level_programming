#include "main.h"
/**
 * _strchr - a function that print a string in reverse
 * @s: the char pointer
 * @c: the char to find
 * Return: a
 */
char *_strchr(char *s, char c)
{
	int contador = 0,found = 0;

	while (s[contador])
	{
		if (s[contador] == c)
		{
			return (s + contador);
			found++;
		}
		found++;
		contador++;
	}
	if (found <= contador)
	{
		return(s + 1);
	}
	return(0);
}
