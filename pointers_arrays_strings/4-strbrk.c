#include "main.h"
/**
 * _strbrk - a function that print a string in reverse
 * @s: the char pointer
 * @accept: the chars to find
 * Return: a
 */
char *_strpbrk(char *s, char *accept)
{
	int contador = 0;

	while (s[contador])
	{
		while (accept[contador2])
		{
			if (s[contador] == accept[contador])
			{
				return (s);
			}
			contador2++;
		}
		contador++;
	}
	if (s == '\0')
	{
		return (s);
	}
	return (0);
}
