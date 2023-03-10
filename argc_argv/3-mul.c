#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - a program that prints the result of a multiplication of two numbers
 * @argc: arguement count
 * @argv: argument value, a strings that come after calling function
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int resultado = 0, num1 = 0, num2 = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		resultado = num1 * num2;
		printf("%d\n", resultado);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
