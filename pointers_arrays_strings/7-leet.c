#include "main.h"
/**
 * cap_string - a function that print a string in reverse
 * @leet: the char pointer
 * Return: a
 */
char *leet(char *string)
{
	int contadorfuera = 0, contadordentro = 0;
	char letras[] = "aeotl";
	char numeros[5] = "43071";

	while (string[contadorfuera])
	{
		while (letras[contadordentro])
		{
			if (string[contadorfuera] == letras[contadordentro] || string[contadorfuera]
			== letras[contadordentro] - 32) 
			{
				string[contadorfuera] = numeros[contadordentro];
			}
			contadordentro++;
		}
		contadorfuera++;
		contadordentro = 0;
	}
	return (string);
}
