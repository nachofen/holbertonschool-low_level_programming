#include "main.h"
/**
 * _strchr - a function that print a string in reverse
 * @s: the char pointer
 * @c: the char to find
 * Return: a
 */
char *_strchr(char *s, char c)
{
	int contador1 = 0,contador2 = 0,found = 0;
	char *puntero = s;

	while (s[contador1])
	{
		contador1++;
	}
	while (s[contador2])
	{
		if (s[contador2] == c)
		{
			return (puntero + contador2);
			found++;
		}
		found++;
		contador2++;
	}
	if (found <= contador1)
	       return (puntero + 1);

	return (0);
}
