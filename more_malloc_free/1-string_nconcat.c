#include <stdlib.h>
#include "main.h"
/**
 ** _strlen - a function that tells the length of a string
 ** @s: the char pointer
 ** Return: int
 **/
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
 ** _memcpy - copies memory area
 ** @dest: pointer to destination memory area
 ** @src: pointer to source memory area
 ** @n: number of bytes to copy
 ** Return: pointer to destination memory area
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	unsigned int s1_len = 0, s2_len = 0;

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
	pointer = malloc(s1_len + n + 1);
	if (!pointer)
	{
		exit(1);
	}
	_memcpy(pointer, s1, s1_len);
	_memcpy(pointer + s1_len, s2, n);
	pointer[s1_len + n] = '\0';
	return (pointer);
}
