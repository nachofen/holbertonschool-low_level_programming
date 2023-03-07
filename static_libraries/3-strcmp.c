#include "main.h"
/**
 * _strcmp - a function that print a string in reverse
 * @s1: the char pointer
 * @s2: a
 * Return: a
 */
int _strcmp(char *s1, char *s2)
{
	int length = 0;

		while (s1[length] && s2[length])
		{
			if (s1[length] != s2[length])
			{
				return (s1[length] - s2[length]);
			}
			length++;
		}
	return (s1[length] - s2[length]);
}
