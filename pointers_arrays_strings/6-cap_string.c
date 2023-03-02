#include "main.h"
/**
 * cap_string - a function that print a string in reverse
 * @string: the char pointer
 * Return: a
 */
char *cap_string(char *string)
{
	int length = 0;

	while (string[length])
	{
		if (string[length] >= 'a' && string[length] <= 'z')
		{
			if (string[length - 1] == ',' || string[length - 1] == ';' ||
			string[length - 1] == '!' || string[length - 1] == '.' || string[length - 1]
			== '"' || string[length - 1] == ' ' || string[length - 1] == '\t' ||
			string[length - 1] == '\n' || string[length - 1] == '(' ||
			string[length - 1] == ')' || string[length - 1] == '{' || string[length - 1]
			== '}' || string[length - 1] == '?')
			{
			string[length] = string[length] - 32;
			}
		}
		length++;
	}
	return (string);
}
