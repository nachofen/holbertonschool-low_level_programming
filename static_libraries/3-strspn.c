#include "main.h"
/**
 * _strspn - a function that print a string in reverse
 * @s: the char pointer
 * @accept: the char to find
 * Return: a
 */
unsigned int _strspn(char *s, char *accept)
{
	int contador = 0, contador2 = 0, contdif = 0, encontre = 0;

	while (s[contador])
	{
		while (accept[contador2])
		{
			if (s[contador] == accept[contador2])
			{
				encontre = 1;
				break;
			}
			contador2++;
		}
		if (encontre == 0)
		{
			break;
		}
		contdif++;
		contador2 = 0;
		contador++;
		encontre = 0;
	}
	return (contdif);
}
