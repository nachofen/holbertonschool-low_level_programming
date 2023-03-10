#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * main - a program that prints the result of a multiplication of two numbers
 * @argc: arguement count
 * @argv: argument value, a strings that come after calling function
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int resultado = 0, contador = 0;

	if (argc > 0)
	{
		while (argv[contador])
		{
			if (isdigit(argv[contador] != 0))
			{
				resultado = resultado + atoi(argv[contador]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			contador++;
		}
		printf("%d\n", resultado);
	}
	return (0);
}
