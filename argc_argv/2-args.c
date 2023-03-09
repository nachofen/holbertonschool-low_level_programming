#include <stdio.h>
/**
 * main - a program that prints arguments, followed by a new line
 * @argc: arguement count
 * @argv: argument value, a strings that come after calling function
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int contador = 0;

	if (argc > 0)
	{
		for (; contador < argc; contador++)
		{
			printf("%s\n", argv[contador]);
		}
	}
	return (0);
}
