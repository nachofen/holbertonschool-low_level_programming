#include "main.h"
/**
 * _strncpy - a function that print a string in reverse
 * @dest: the char pointer
 * @src: a
 * @n : a
 * Return: a
 */
char *_strncpy(char *dest, char *src, int n)
{
	int length = 0;

	if (n > 0)
	{
		while (src[length] &&  length < n)
		{
			dest[length] = src[length];
			length++;
		}
	}
	while (n > length)
	{
		dest[length] = '\0';
		length++;
	}
	return (dest);
}
