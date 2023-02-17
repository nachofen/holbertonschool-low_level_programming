#include "main.h"
/**
 * _isalpha - This is a description
 * @c: input char
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _isalpha(int c)
{
	int size;

	if (c >= 'a' && c <= 'z')
		size = 1;
	if (c >= 'A' && c <= 'Z')
		size = 2;
	if (size == 1 || size == 2)
		return (1);
	else
		return (0);
}
