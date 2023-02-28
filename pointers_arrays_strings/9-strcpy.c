#include "main.h"
/**
 * _strcpy - a function that print a string in reverse
 * @dest: the char pointer
 * @src: a
 * Return: a
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;

	while (*src)
	{
		dest[length] = src[length];
		length++;
	}
	return (dest);
}
