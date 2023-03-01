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
	int l2 = 0;
	char *auxi = dest;

	if (n > 0)
	{
		while (dest[l2] && l2 < n)
		{
			dest[l2] = src[l2];
			l2++;
		}
	}
	return (auxi);
}
