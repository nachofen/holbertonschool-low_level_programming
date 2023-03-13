#include <stdlib.h>
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

/**
 * _strlen - a function that tells the length of a string
 * @s: the char pointer
 * Return: int
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
/**
 * str_concat - A function that creates an array of chars,
 * and initializes it with a specific char.
 * @s1: The size of the array
 * @s2: a
 * Return: Apointer to the array or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	int length = 0, length2 = 0;
	char *pointer;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	length = _strlen(s1);
	length2 = _strlen(s2);
	pointer = malloc(sizeof(char) * (length + length2 + 1));
	if (!pointer)
	{
		exit(1);
	}
	_strcat(pointer, s1);
	_strcat(pointer, s2);
	return (pointer);
}
