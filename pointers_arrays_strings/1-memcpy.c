#include "main.h"
/**
 * _memcpy - a function that print a string in reverse
 * @src: the char pointer source
 * @dest: the char pointer to fill
 * @n: the area to fill
 * Return: a
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int contador = 0;
	char *puntero = src;

	while (contador < n)
	{
		dest[contador] = puntero[contador];
		contador++;
	}
	return (dest);
}
