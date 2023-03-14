#include <stdlib.h>
#include "main.h"

/**
 ** _strlen - calculates the length of a string.
 ** @s: pointer to the character array.
 ** Return: length of the string
 **/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 ** _strncat - a function that print a string in reverse
 ** @dest: the char pointer
 ** @src: a
 ** @n : a
 ** Return: a
 **/
char *_strncat(char *dest, char *src, int n)
{
	int length = 0, l2 = 0;
	char *auxi = dest;

	if (n >= 0)
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
/**
 ** _strcpy - a function that print a string in reverse
 ** @dest: the char pointer
 ** @src: a
 ** Return: a
 **/
char *_strcpy(char *dest, char *src)
{
	int length = 0;

	while (src[length])
	{
		dest[length] = src[length];
		length++;
	}
	dest[length] = '\0';
	return (dest);
}

/**
 * string_nconcat - a function that print a string in reverse
 * @s1: the char pointer
 * @s2: char pointer
 * @n: bytes of s2 to be added to s1
 * Return: pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	unsigned int s1_len, s2_len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s1_len = _strlen(s1);
	s2_len = _strlen(s2);
	if (n >= s2_len)
	{
		n = s2_len;
	}
	pointer = malloc((s1_len) + n + 1);
	if (!pointer)
	{
		exit(1);
	}
	_strcpy(pointer, s1);
	_strncat(pointer, s2, n);
	return (pointer);
}
