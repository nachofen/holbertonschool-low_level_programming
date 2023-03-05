#include "main.h"
/**
 * _strstr - a function that print a string in reverse
 * @haystack: the char pointer
 * @needle: the chars to find
 * Return: a
 */
char *_strstr(char *haystack, char *needle)
{
	int contador = 0, contador2 = 0, contador3 = 0, contencontre = 0, letras = 0;
	char *puntero;

	while (needle[contador])
	{
		contador++;
	}
	while (haystack[contador3])
	{
		contador3++;
	}
	while (haystack[contador2])
	{	
		while (haystack[contador2] == needle[contencontre])
		{
			contencontre++;
			letras++;
			
			if (contador == letras)
			{
				puntero = &haystack[contador2 - letras + 1];
				return (puntero);
			}
		}
		contador2++;
		contencontre = 0;
		letras = 0;
	}
	if (letras == 0)
	{
		return (needle + 1);
	}
	return (0);
}
