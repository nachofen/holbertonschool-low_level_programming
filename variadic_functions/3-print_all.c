#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void printchar(va_list c)
{
	printf("%c", va_arg(c, int));
}
void printint(va_list i)
{
	printf("%d", va_arg(i, int));
}
void printfloat(va_list fl)
{
	printf("%f", va_arg(fl, double));
}
void printstr(va_list str)
{
	char *pointer = va_arg(str, char *);

	if (pointer == NULL)
	{
		printf("(nil)");
	}
	printf("%s", pointer);
}

/**
 * print_all - functions that print anything
 * @format: the type of argument that will be passed
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0, j = 0;
	va_list anything;
	char *coma = "";
	strvar struargs[] = {
	{"c", printchar},
	{"i", printint},
	{"f", printfloat},
	{"s", printstr}
	};

	va_start(anything, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
		       if(format[i] == *struargs[j].letra)
			{
				printf("%s", coma);
				struargs[j].f(anything);
				coma = ", ";
			}
		       j++;
		}
		i++;
	}
	va_end(anything);
	printf("\n");
}
