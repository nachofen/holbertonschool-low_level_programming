#include "main.h"
/**
 * _atoi - a function that print a string in reverse
 * @s: a
 * Return: a
 */
int _atoi(char *s)
{
	int length = 0;
	int finisher = 0;
	int negativo = 1;
	unsigned int num = 0;

	while (s[length])
	{
		if(s[length] == '-')
		{
		negativo = negativo * -1;
		}

		while (s[length] >= 48 && s[length] <= 57)
		{
			finisher = 1;
			num = (num * 10) + (s[length] - 48);
			length++;
		}
		if (finisher == 1)
		{
			break;
		}
		length++;
	}
	return (num * negativo);
}
