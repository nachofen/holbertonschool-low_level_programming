#include "main.h"
/**
 * _memset - a function that print a string in reverse
 * @s: the char pointer
 * @b: the char to fill
 * @n: the area to fill
 * Return: a
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int contador = 0;
	char *puntero = s;

	while (contador < n)
	{
		puntero[contador] = b;
		contador++;
	}
	return (puntero);
}
