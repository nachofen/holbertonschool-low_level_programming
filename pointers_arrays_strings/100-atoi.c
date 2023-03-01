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
	int negativo;
	unsigned int num = 0;

	while (s[length])
	{
		negativo = 0;
		while (s[length] >= 48 && s[length] <= 57)
		{
			if(s[length - 1] == '-')
			{
				negativo = 1;
			}
			finisher = 1;
			num = (num * 10) + (s[length] - 48);
			length++;
		}
		if(negativo == 1)
		{
			num = num * - 1;
		}
		if (finisher == 1)
		{
			break;
		}
		length++;
	}
	return (num);
}
