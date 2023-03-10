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
	int resultado = 0, contador = 1, contador2 = 0, num = 0;

		while (contador < argc)
		{
			while (argv[contador][contador2])
			{
				if (isdigit(argv[contador][contador2]) == 0)
				{
					printf("Error\n");
					return (1);
				}
				contador2++;
			}
			contador++;
			contador2 = 0;
		}
		contador = 1;
		while (contador < argc)
		{
			num = atoi(argv[contador]);
			resultado = resultado + num;
			contador++;
		}
		printf("%d\n", resultado);
	return (0);
}
