#include "main.h"
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
