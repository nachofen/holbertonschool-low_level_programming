#include "main.h"
/**
 * _strstr - a function that print a string in reverse
 * @haystack: the char pointer
 * @needle: the chars to find
 * Return: a
 */
char *_strstr(char *haystack, char *needle)
{
	int contador = 0, contador2 = 0, contador3 = 0, letras = 0;
	char *puntero;

	while (needle[contador2])
	{
		contador2++;
	}
	while (haystack[contador] && needle[contador3])
	{
		while (haystack[contador] == needle[contador3])
		{
			letras++;
			if (contador2 == letras)
			{
				puntero = &haystack[contador - letras];
				return (puntero);
			}
			contador3++;
		}
		contador++;
		contador2++;
		contador3 = 0;
		letras = 0;
	}
	if (letras == 0)
	{
		return (needle + 1);
	}
	return (0);
}
