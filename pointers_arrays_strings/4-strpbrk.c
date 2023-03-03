#include "main.h"
/**
 * _strbrk - a function that print a string in reverse
 * @s: the char pointer
 * @accept: the chars to find
 * Return: a
 */
char *_strpbrk(char *s, char *accept)
{
	int contador = 0, contador2 = 0, encontro = 0;

	while (s[contador])
	{
		while (accept[contador2])
		{
			if (s[contador] == accept[contador2])
			{
				encontro = 1;
				return (s + contador);		
			}
			contador2++;
		}
		contador++;
		contador2 = 0;
	}
	if (encontro == 0)
	{
		return (s + contador);
	}
	return (0);
}
