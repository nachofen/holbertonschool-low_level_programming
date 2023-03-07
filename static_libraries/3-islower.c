#include "main.h"
/**
 * _islower - This is a description
 * @c: input char
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
