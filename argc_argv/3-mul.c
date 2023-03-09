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
	int num1 = atoi(argv[1]), num2 = atoi(argv[2]);
	int resultado = num1 * num2;

	if (argc == 3)
	{
		printf("%d\n", resultado);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
