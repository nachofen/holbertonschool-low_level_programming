#include "main.h"
/**
 * _strcat - a function that print a string in reverse
 * @dest: the char pointer
 * @src: a
 * Return: a
 */
char *_strcat(char *dest, char *src)
{
	int length = 0, l2 = 0;
	char *auxi = dest;

	while (dest[length])
	{
		length++;
	}
	while (src[l2])
	{
		dest[length] = src[l2];
		length++;
		l2++;
	}
	return (auxi);
}
