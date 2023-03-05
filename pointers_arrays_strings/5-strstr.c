#include "main.h"
/**
 * _strstr - a function that print a string in reverse
 * @haystack: the char pointer
 * @needle: the chars to find
 * Return: a
 */
char *_strstr(char *haystack, char *needle)
{
	int contador = 0, contador2 = 0, contencontre = 0, letras = 0;
	char *puntero;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (needle[contador])
	{
		contador++;
	}
	while (haystack[contador2])
	{
		while (haystack[contador2 + contencontre] == needle[contencontre])
		{
			letras++;
			if (contador == letras)
			{
				puntero = &haystack[contador2];
				return (puntero);
			}
			contencontre++;
		}
		contador2++;
		contencontre = 0;
		letras = 0;
	}
		return (haystack + 1);
}
