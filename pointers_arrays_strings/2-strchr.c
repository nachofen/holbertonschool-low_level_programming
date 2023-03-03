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
			if (s[contador] == '\0')
			{
				s = 0;
				return(s);
			}
			else
			{
				return (s + contador);
			}
			found++;
		}
		found++;
		contador++;
	}
	if (found <= contador)
	{
		s = 0;
		return(s);
	}
	return(0);
}
