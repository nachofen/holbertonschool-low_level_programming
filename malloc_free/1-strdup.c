#include <stdlib.h>
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

	while (src[length])
	{
		dest[length] = src[length];
		length++;
	}
	dest[length] = '\0';
	return (dest);
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
 * _strdup - A function that creates an array of chars,
 * and initializes it with a specific char.
 * @str: The size of the array
 * Return: Apointer to the array or NULL if it fails
 */
char *_strdup(char *str)
{
	int length = _strlen(str);
	char *pointer = malloc(sizeof(char) * length - 1);
	char *dupli;

	if (str == NULL)
	{
		return (NULL);
	}
	if (!pointer)
	{
		exit(1);
	}
	dupli = _strcpy(pointer, str);

	return (dupli);
}
