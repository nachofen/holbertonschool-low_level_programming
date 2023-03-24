#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - functions that print anything
 * @format: the type of argument that will be passed
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0, cont = 0, found = 0;
	va_list anything;
	const char *pformat = format;
	char *auxs;

	va_start(anything, format);
	while (pformat[i] != '\0')
	{
		i++;
	}

	while (cont < i)
	{
		if (found >= 1 && cont < i)
		{
			printf(", ");
		}
		switch (pformat[cont])
		{
			case 'c':
				printf("%c", va_arg(anything, int));
				cont++;
				found++;
				break;
			case 'i':
				printf("%d", va_arg(anything, int));
				cont++;
				found++;
				break;
			case 'f':
				printf("%f", va_arg(anything, double));
				cont++;
				found++;
				break;
			case 's':	
				auxs = va_arg(anything, char *);

				if(auxs == NULL)
					printf("(nil)");
				
				printf("%s", auxs);
				cont++;
				found++;
				break;
				
				default:
				cont++;
				found = 0;
				break;
		}
	}
	printf("\n");
	va_end(anything);
}
