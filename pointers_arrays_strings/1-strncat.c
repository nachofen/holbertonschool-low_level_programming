#include "main.h"
/**
 * _strncat - a function that print a string in reverse
 * @dest: the char pointer
 * @src: a
 * @n : a
 * Return: a
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = 0, l2 = 0;
	char *auxi = dest;

	if (n > 0)
	{
		while (dest[length])
		{
			length++;
		}
		while (src[l2] && n > 0)
		{
			dest[length] = src[l2];
			length++;
			l2++;
			n--;
		}
	}
	else
	{
		auxi[length] = '\0';
	}
	return (auxi);
}
