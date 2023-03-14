#include <stdlib.h>
#include "main.h"

/**
 ** _strncat - a function that concatenates two strings 
 ** @dest: the char pointer
 ** @src: the first string
 ** @n : the size of second string to be added
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
 ** _strcpy - a function that copy a string
 ** @dest: the destiny pointer
 ** @src: src pointer
 ** Return: a pointer to copied string
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
 * string_nconcat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes of s2 to be added to s1
 * Return: pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	unsigned int s1_len = 0, s2_len = 0;

	for (s1_len = 0; s1[s1_len]; s1_len++)
	{}
	for (s2_len = 0; s2[s2_len]; s2_len++)
	{}
	if (s1 == NULL)
	{
		s1 = "";
		s1_len = 0;
	}
	if (s2 == NULL)
	{
		s2 = "";
		s2_len = 0;
	}
	if (n >= s2_len)
	{
		n = s2_len;
	}
	pointer = malloc(s1_len + n + 1);
	if (!pointer)
	{
		exit(1);
	}
	_strcpy(pointer, s1);
	_strncat(pointer, s2, n);
	return (pointer);
}
