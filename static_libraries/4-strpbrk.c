#include "main.h"
/**
 * _strpbrk - a function that print a string in reverse
 * @s: the char pointer
 * @accept: the chars to find
 * Return: a
 */
char *_strpbrk(char *s, char *accept)
{
	int contador = 0, contador2 = 0;
	char *puntero;

	while (s[contador])
	{
		while (accept[contador2])
		{
			if (s[contador] == accept[contador2])
			{
				puntero = &s[contador];
				return (puntero);
			}
			contador2++;
		}
		contador++;
		contador2 = 0;
	}
	return (0);
}
